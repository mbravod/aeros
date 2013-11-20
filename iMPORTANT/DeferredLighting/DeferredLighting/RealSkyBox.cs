using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Content;
namespace MyGame
{
    //just a comment
    /// <summary>
    /// Handles all of the aspects of working with a skybox.
    /// </summary>
    public class RealSkyBox
    {
        /// <summary>
        /// The skybox model, which will just be a cube
        /// </summary>
        public Model skyBox;

        /// <summary>
        /// The actual skybox texture
        /// </summary>
        public TextureCube skyBoxTexture;

        /// <summary>
        /// The effect file that the skybox will use to render
        /// </summary>
        private Effect skyBoxEffect;

        /// <summary>
        /// The size of the cube, used so that we can resize the box
        /// for different sized environments.
        /// </summary>
        private float size = 5000f;

        /// <summary>
        /// Creates a new skybox
        /// </summary>
        /// <param name="skyboxTexture">the name of the skybox texture to use</param>
        public RealSkyBox(ContentManager Content)
        {
            skyBox = Content.Load<Model>("Skyboxes/cube");

            skyBoxEffect = Content.Load<Effect>("Skyboxes/Skybox");
        }
        int a = 0;
        /// <summary>
        /// Does the actual drawing of the skybox with our skybox effect.
        /// There is no world matrix, because we're assuming the skybox won't
        /// be moved around.  The size of the skybox can be changed with the size
        /// variable.
        /// </summary>
        /// <param name="view">The view matrix for the effect</param>
        /// <param name="projection">The projection matrix for the effect</param>
        /// <param name="cameraPosition">The position of the camera</param>
        ///
        int drawcount = 0;
        public int frame = -20;


        public static byte[] getface(string angle, GraphicsDevice graphicsDevice, int frame)
        {
            // string file = "D:\\Documents and Settings\\Administrator\\Desktop\\skybox\\PPV\\";
            string file = "C:\\skybox\\ppv\\";

            string pframe = frame.ToString();
            if (frame >= 0)
            {

                while (pframe.Length < 4)
                {
                    pframe = "0" + pframe;
                }
            }
            else
            {
                pframe = (-frame).ToString();
                while (pframe.Length < 3)
                {
                    pframe = "0" + pframe;
                }
                pframe = "-" + pframe;
            }
            System.Drawing.Image image = System.Drawing.Bitmap.FromFile(file + angle + "\\" + pframe + "_1.png");
            System.Drawing.Bitmap bitmap = new System.Drawing.Bitmap(image);

            if (angle == "up")
            {

                // bitmap.RotateFlip(System.Drawing.RotateFlipType.Rotate90FlipNone);

                bitmap.RotateFlip(System.Drawing.RotateFlipType.Rotate180FlipNone);
            }


            Texture2D mapTexture = new Texture2D(graphicsDevice, bitmap.Width, bitmap.Height, false, SurfaceFormat.Color);
            System.Drawing.Imaging.BitmapData data = bitmap.LockBits(new System.Drawing.Rectangle(0, 0, bitmap.Width, bitmap.Height), System.Drawing.Imaging.ImageLockMode.ReadOnly, System.Drawing.Imaging.PixelFormat.Format32bppRgb);
            byte[] bytes = new byte[4194304];//data.Height * data.Width * 4
            System.Runtime.InteropServices.Marshal.Copy(data.Scan0, bytes, 0, bytes.Length);
            mapTexture.SetData<byte>(bytes, 0, 4194304);//data.Height * data.Width * 4
            bitmap.UnlockBits(data);
            bitmap.Dispose();
            image.Dispose();
            return bytes;
        }

        TextureCube tc;

        public void Draw( Matrix projection, Vector3 cameraTarget, Vector3 cameraPosition, float rotation, GraphicsDeviceManager graphics, GraphicsDevice graphicsDevice)
        {

            if (frame > 240)
            {
                frame = 0;
            }

            if ((drawcount + 59) % 60 == 0)
            {

                tc = new TextureCube(graphicsDevice, 1024, false, SurfaceFormat.Color);
                tc.SetData<byte>(CubeMapFace.PositiveX, getface("0", graphicsDevice, frame));
                drawcount++;

            }


            if ((drawcount + 10) % 60 == 0)
            {
                tc.SetData<byte>(CubeMapFace.NegativeZ, getface("90", graphicsDevice, frame));
            }


            if ((drawcount + 20) % 60 == 0)
            {
                tc.SetData<byte>(CubeMapFace.NegativeX, getface("180", graphicsDevice, frame));
            }

            if ((drawcount + 30) % 60 == 0)
            {
                tc.SetData<byte>(CubeMapFace.PositiveZ, getface("270", graphicsDevice, frame));
            }

            if ((drawcount + 40) % 60 == 0)
            {
                tc.SetData<byte>(CubeMapFace.PositiveY, getface("up", graphicsDevice, frame));
            }


            if ((drawcount - 50) % 60 == 0)
            {
                skyBoxTexture = tc;
                frame++;

            }


            skyBoxEffect.Parameters["SkyBoxTexture"].SetValue(skyBoxTexture);
            //drawcount++;



















            RasterizerState originalRasterizerState = graphics.GraphicsDevice.RasterizerState;
            RasterizerState rasterizerState = new RasterizerState();
            rasterizerState.CullMode = CullMode.None;
            graphics.GraphicsDevice.RasterizerState = rasterizerState;

            Matrix             view = Matrix.CreateLookAt(cameraPosition, cameraTarget, Vector3.UnitY);


            foreach (EffectPass pass in skyBoxEffect.CurrentTechnique.Passes)
            {
                pass.Apply();


                foreach (ModelMesh mesh in skyBox.Meshes)
                {

                    foreach (ModelMeshPart part in mesh.MeshParts)
                    {
                        part.Effect = skyBoxEffect;
                        part.Effect.Parameters["World"].SetValue(
                         Matrix.CreateScale(size) * Matrix.CreateTranslation(new Vector3(cameraPosition.X, cameraPosition.Y, cameraPosition.Z)) * Matrix.CreateRotationY(rotation));
                        part.Effect.Parameters["View"].SetValue(view);
                        part.Effect.Parameters["Projection"].SetValue(projection);

                        //part.Effect.Parameters["frame"].SetValue( float(.2f));
                    //    cameraPosition.Y = 1800 - 50;
                        part.Effect.Parameters["CameraPosition"].SetValue(cameraPosition);
                    }


                    mesh.Draw();
                }
            }

            graphics.GraphicsDevice.RasterizerState = originalRasterizerState;

        }
    }
}
