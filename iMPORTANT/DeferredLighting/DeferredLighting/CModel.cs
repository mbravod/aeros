using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;

namespace MyGame
{
    public class CModel
    {
        public Vector3 Position { get; set; }
        public Vector3 Rotation { get; set; }
        public Vector3 Scale { get; set; }

        public Model Model { get; private set; }

        private Matrix[] modelTransforms;
        private GraphicsDevice graphicsDevice;
        private BoundingSphere boundingSphere;

        public BoundingSphere BoundingSphere
        {
            get
            {
                // No need for rotation, as this is a sphere
                Matrix worldTransform = Matrix.CreateScale(Scale)
                    * Matrix.CreateTranslation(Position);

                BoundingSphere transformed = boundingSphere;
                transformed = transformed.Transform(worldTransform);

                return transformed;
            }
        }

        public CModel(Model Model, Vector3 Position, Vector3 Rotation,
            Vector3 Scale, GraphicsDevice graphicsDevice)
        {
            this.Model = Model;

            modelTransforms = new Matrix[Model.Bones.Count];
            Model.CopyAbsoluteBoneTransformsTo(modelTransforms);

            buildBoundingSphere();

            this.Position = Position;
            this.Rotation = Rotation;
            this.Scale = Scale;

            this.graphicsDevice = graphicsDevice;

            
        }
        public static Effect effect;
        private void buildBoundingSphere()
        {
            BoundingSphere sphere = new BoundingSphere(Vector3.Zero, 0);

            // Merge all the model's built in bounding spheres
            foreach (ModelMesh mesh in Model.Meshes)
            {
                BoundingSphere transformed = mesh.BoundingSphere.Transform(
                    modelTransforms[mesh.ParentBone.Index]);

                sphere = BoundingSphere.CreateMerged(sphere, transformed);
            }

            this.boundingSphere = sphere;
        }





        public void setpars(ModelMesh mesh,int i,Effect effect)
        {
            effect.Parameters["alphaenabled"].SetValue(false);
            effect.Parameters["bumplevel"].SetValue(.99f);
            effect.Parameters["SpecularColor"].SetValue(new Vector4(0.0f, 0.0f, 0.0f, 0.0f));
            effect.Parameters["SpecularIntensity"].SetValue(0.0f);

            if (mesh.Name.Contains("FA_") || mesh.Name.Contains("BODY_") || mesh.Name.Contains("MIRROR") || mesh.Name.Contains("GLASS") || mesh.Name.Contains("WND"))
            {
                effect.Parameters["alphaenabled"].SetValue(true);
            }
            //  effect.Parameters["alphaCROP"].SetValue(true);
            if (mesh.Name.Contains("DOOR") || mesh.Name.Contains("BUMP") || mesh.Name.Contains("BODY"))
            {
               effect.Parameters["bumplevel"].SetValue(0.0001f);
            }
            
            
            
            
            
            if (mesh.Name.Contains("BUMP_F") && (i == 2 || i == 3)) //2,3
            {
                effect.Parameters["SpecularColor"].SetValue(new Vector4(0.81f, 0.81f, 0.81f, 1.0f));
                effect.Parameters["SpecularIntensity"].SetValue(1.0f);
            }
  if (mesh.Name.Contains("LGT_RL") && i > 1)
            {
                effect.Parameters["SpecularColor"].SetValue(new Vector4(0.81f, 0.81f, 0.81f, 1.0f));
                effect.Parameters["SpecularIntensity"].SetValue(1.0f);
            }


  if (mesh.Name.Contains("FA_W") || mesh.Name.Contains("FA_S") || mesh.Name.Contains("FA_R") || mesh.Name.Contains("FA_L") || mesh.Name.Contains("FA_B"))
            {
               effect.Parameters["World"].SetValue(Matrix.CreateScale(0.001f) * Matrix.CreateTranslation(0, -110, 1));
           
            }


            if (mesh.Name.Contains("BUMP_F"))
            {
            //   effect.Parameters["World"].SetValue(Matrix.CreateScale(0.001f) * Matrix.CreateTranslation(0, -110, 1));
            }

//mesh.Name.Contains("COCK") 
            if ( ( mesh.Name.Contains("_LR") || mesh.Name.Contains("GEAR") || mesh.Name.Contains("LR_")) && (!mesh.Name.Contains("COCK") ))
            {
           //     effect.Parameters["World"].SetValue(Matrix.CreateScale(0.001f) * Matrix.CreateTranslation(0, -110, 1));
            }

        }
        public void Draw(Matrix View, Matrix Projection,  Vector3 camerapos)
        {
            Matrix baseWorld = Matrix.CreateScale(Scale) * Matrix.CreateFromYawPitchRoll( Rotation.Y, Rotation.X, Rotation.Z)  * Matrix.CreateTranslation(Position);

              foreach (ModelMesh mesh in Model.Meshes)
              {
                  int i=0;
                foreach (Effect effect in mesh.Effects)
                {
                    i++;

                    effect.CurrentTechnique = effect.Techniques["Textured"];
                    effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);
                    effect.Parameters["View"].SetValue(View);
                    effect.Parameters["Projection"].SetValue(Projection);
                    effect.Parameters["DiffuseLightDirection"].SetValue(camerapos);
                    effect.Parameters["WorldInverseTranspose"].SetValue(Matrix.Transpose(Matrix.Invert(baseWorld)));

/*
                    effect.CurrentTechnique = effect.Techniques["Textured"];
                    effect.Parameters["World"].SetValue(baseWorld);
                    effect.Parameters["View"].SetValue(View);
                    //effect.Parameters["ViewVector"].SetValue(camerapos);
                    effect.Parameters["Projection"].SetValue(Projection);
                   // effect.Parameters["DiffuseLightDirection"].SetValue(Game1.car_position);
                    effect.Parameters["DiffuseLightDirection"].SetValue(camerapos);
                    effect.Parameters["WorldInverseTranspose"].SetValue(Matrix.Transpose(Matrix.Invert(baseWorld)));
                  */
                    setpars(mesh,i,effect);

                }
                mesh.Draw();
            }
    //     Draw2(View,  Projection,camerapos);
        }

        public void Draw2(Matrix View, Matrix Projection, Vector3 camerapos)
        {
            // Calculate the base transformation by combining
            // translation, rotation, and scaling
            Matrix baseWorld = Matrix.CreateScale(Scale) * Matrix.CreateFromYawPitchRoll(Rotation.Y, Rotation.X, Rotation.Z) * Matrix.CreateTranslation(Position);

            foreach (ModelMesh mesh in Model.Meshes)
            {
                int i = 0;
                foreach (Effect effect in mesh.Effects)
                {
                    i++;
                    effect.CurrentTechnique = effect.Techniques["Alpha"];
                    effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);
                    setpars(mesh, i, effect);
           

                }
                mesh.Draw();
            }
            Draw3(View, Projection, camerapos);
        }
        public static TextureCube skyboxTexture;

        public void Draw3(Matrix View, Matrix Projection, Vector3 camerapos)
        {
  
            Matrix baseWorld = Matrix.CreateScale(Scale) * Matrix.CreateFromYawPitchRoll(Rotation.Y, Rotation.X, Rotation.Z) * Matrix.CreateTranslation(Position);

            foreach (ModelMesh mesh in Model.Meshes)
            {
                foreach (ModelMeshPart part in mesh.MeshParts)
                {
                    //  part.Effect = CModel.effect;
                }




                int i = 0;
                if (mesh.Name == "default" || mesh.Name == "Object002" ||mesh.Name.Contains("model"))
                    {
                       
                    }
                    else
                    {

                foreach (Effect effect in mesh.Effects)
                {       effect.CurrentTechnique = effect.Techniques["Reflection"];
                 
                    i++;
                  effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);
                    effect.Parameters["CameraPosition"].SetValue(camerapos);
                   
                    effect.Parameters["SkyboxTexture"].SetValue(CModel.skyboxTexture);
                    setpars(mesh, i, effect);

              
                }
                mesh.Draw();
                
                    }
            }
        }


      


        }

    }

