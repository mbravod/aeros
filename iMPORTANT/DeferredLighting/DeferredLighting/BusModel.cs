using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Input;
namespace MyGame
{
    public class BusModel
    {






        public Vector3 position, position2;
         public Quaternion rotation = Quaternion.Identity;
         public Quaternion rotation2 = Quaternion.Identity;
         private float speed = 0.0f;
        private float acceleration = 0.0f;
        int gear = 1;
        bool free = true;

        private float steerAngle = 0.0f;
        private int turn = 0;
      

        float maxSteerAngle = (float)Math.PI / 6;
        float steerSpeed = (float)Math.PI / 32;

        public float[] topSpeeds = null;
        public float[] accelerations = null;
        public float maxReverseSpeed = 0.0f;

        public float VD = 12.0f;
        public float HD = 2.1f;
        public float L = 6.0f;


        public float real_steering;
        public float real_accel;
        public float real_daccel;

        public void ProcessKeyboard(GameTime gameTime, float real_steering_, float real_accel_,float real_daccel_)
        {
            KeyboardState keys = Keyboard.GetState();
           real_steering= real_steering_;
           real_accel = real_accel_;
           real_daccel = real_daccel_;
            if (keys.IsKeyDown(Keys.F1)) dollyx += .001f;
            if (keys.IsKeyDown(Keys.F2)) dollyx -= .001f;

            if (real_accel > 0)
            {
                Accelerate();
            }
            else if (real_daccel > 0)
            {
                Brake();
            }
            else 
            {
                Free();
            }

         /*   if (keys.IsKeyDown(Keys.J))
                Accelerate();
            else if (keys.IsKeyDown(Keys.K))
                Brake();
            else
                Free();
           
            if (keys.IsKeyDown(Keys.N))
                Left();
            else if (keys.IsKeyDown(Keys.M))
                Right();
            else
                NoTurn();
          * */
        }

        public void Accelerate()
        {
            free = false;

            if ((gear<7)&&(speed > topSpeeds[gear]))
            {
                gear++;                
            }
            if (gear == 0)
            {
                acceleration = accelerations[1]*real_accel/6.0f;
            }
            else if (gear < 7)
                acceleration = accelerations[gear]*real_accel/6.0f;
            else
            {
                gear = 6;
                acceleration = 0;
                speed = topSpeeds[6];
            }
        }

        public void Brake()
        {
            free = false;

            if((gear>0)&&speed<=topSpeeds[gear-1])
            {
                gear--;
            }
            if ((gear == 0) && (speed < -maxReverseSpeed))
            {
                acceleration = 0;
                speed = -maxReverseSpeed;
            }
            else
            {
                acceleration = -accelerations[gear]* real_daccel / 3.0f;//6.7f;              
            }
        }

        public void Free()
        {
            free = true;

            if ((gear>0)&&(speed < topSpeeds[gear - 1]))
            {
                gear--;
            }
          
            acceleration = - accelerations[gear];         
        }

        public void Left()
        {
            turn = -1;
        }

        public void Right()
        {
            turn = 1;
        }

        public void NoTurn()
        {
            turn = 0;
        }
        public float last_steerAngle;

        public static float last_theta;

        public float Height_test(Vector3 target, int item)
        {
            float heightt;


            Game1.compute_tile_point(target.X, target.Y, target.Z, (int)item);
            heightt = resolve_collision.last_index[(int)item].last_height;
            return heightt;
        }

        public int crash_test(Vector3 target,int item)
        {
         int crash;
                float heightt;

            
             crash = Game1.compute_tile_point(target.X, target.Y, target.Z, (int)item);
                heightt = resolve_collision.last_index[(int)item].last_height;


            if (crash == 255)
            {
                int crashtest1, crashtest2;
                double crashtest1_angle, crashtest2_angle;
                double wall_angle;
                crashtest1 =Game1. compute_tile_point_crash(target.X, target.Y, target.Z, (int)item);
                crashtest1_angle =Game1.crash_angle;
                crashtest2 = Game1.compute_tile_point_crash(target.X, target.Y, target.Z, (int)item);
                crashtest2_angle = Game1.crash_angle;
                if (crashtest1 == 1 && crashtest2 == 1)
                {
                    wall_angle = (crashtest1_angle + crashtest2_angle) / 2;
                }
                if (crashtest1 == 0 && crashtest2 == 1)
                {
                    wall_angle = crashtest2_angle;
                }
                if (crashtest1 == 1 && crashtest2 == 0)
                {
                    wall_angle = 0;
                }

                if (crashtest1 == 0 && crashtest2 == 0)
                {
                    wall_angle = 0;
                }

                if (crashtest1 == 1 && crashtest2 == -1)  //too fast 
                {
                    wall_angle = crashtest1_angle;
                }
            }
               // speed=-.3f*speed ;
                //  temp = new Vector3(car_position.X, car_position.Y, car_position.Z);
                // car_speed = car_speed/2;
                return crash;
            }


        double fd = 1.745;
        double hw = .72;
        int rcount, lcount;
        int start = 0;
        public void Update(GameTime gameTime)
        {
            if (start == 0)
            {
                Vector3 off = new Vector3((float)(dollyx * Math.Sin(0.0f)), 0, (float)(dollyx * Math.Cos(0.0f)));
           position2 = Position+off;
            }
            float time = ((float)gameTime.ElapsedGameTime.Milliseconds) / 1000;

            if (real_steering > .005) { turn = 1; }

            else if (real_steering < .005) { turn = -1; }

            else { turn = 0; }

            if (turn == 0)
            {
                steerAngle = real_steering;/*
                
                rcount=0;
                lcount=0;
                float newAngle = steerAngle;
                if (steerAngle < 0.0f)
                {
                    newAngle = steerAngle + time * steerSpeed*8;
                }
                else if (steerAngle > 0.0f)
                {
                    newAngle = steerAngle - time * steerSpeed*8;
                }
                if (newAngle * steerAngle < 0.0f)
                {
                    steerAngle = 0.0f;
                }
                else
                    steerAngle = real_steering;//newAngle;
                                            */
            }
            else
            {
                if (turn == -1)
                {rcount++;

                steerAngle = real_steering;/*
                    float newAngle = steerAngle - time * steerSpeed *(float)Math.Pow(1.03, rcount);
                    
                    lcount=0;
                    if (newAngle < -maxSteerAngle)
                    {
                        steerAngle = -maxSteerAngle;
                    }
                    else
                    {
                        steerAngle = newAngle;
                    }*/
                }
                else
                {
                    steerAngle = real_steering;
                    /*
                    lcount++;
                    float newAngle = steerAngle + time*steerSpeed * (float)Math.Pow(1.03, lcount);
                    rcount=0;
                    if (newAngle > maxSteerAngle)
                    {
                        steerAngle = maxSteerAngle;
                    }
                    else
                    {
                        steerAngle = newAngle;
                    }*/
                }                
            }
            last_steerAngle = steerAngle;
            if(steerAngle!=0.0f)
            {
                VD = (float)(2 * fd);
                HD = (float)(2 * hw);
                L = (float)(fd);

                float x = (VD / Math.Abs((float)Math.Tan(steerAngle)) + HD / 2);
                float r = (float)Math.Sqrt(x * x + L * L);
                float theta = speed * time / r;
              
                if (steerAngle < 0.0f)
                    theta = -theta;
                Rotation = new Vector3(0,Rotation.Y- theta,0);
               
               rotation = rotation * Quaternion.CreateFromAxisAngle(new Vector3(0, -1, 0), theta);
            }

            float newSpeed = speed + acceleration * time;

            // If neither accelerator not brake is pressed car will come to stop as speed decreases
            // not start to move in opposite direction
            if ((free == true) && (newSpeed * speed <= 0.0f))
            {
                gear = 1;
                acceleration = accelerations[gear];
                speed = 0.0f;
            }
            else
                speed = newSpeed;

            float dist = speed * time;
            Vector3 addVector = Vector3.Transform(new Vector3(0, 0, -1), rotation);
            last_dis = dist;
            last_time=time;
            position += addVector * dist;
            position.Y = .20f;
            Position = position;
        }

        public float last_time;
        public float last_dis;
float dollyx = 3.085f;
        public void doit(){

                double heigth = .3;
                last_theta = Rotation.Y - Game1.Bus_models[1].Rotation.Y;
                last_theta =(float)(((last_theta / (2 * Math.PI) )- Math.Floor(last_theta / (2 * Math.PI))));
                last_theta =(float)( last_theta * 2 * Math.PI - Math.PI);
                if (speed < 0)
                {
                    last_theta = -last_theta;
                }
         //   float last_theta = body-drive;
       
            
               float VDd =3f;
               float Ld = 2.4f;
               float x = (VDd / Math.Abs((float)Math.Tan(last_theta)) + HD / 2);
                float r = (float)Math.Sqrt(x * x + Ld * Ld);
                float theta = speed * last_time / r;
                if (last_theta < 0)
                {
                 theta = -theta;
                }    
               Game1.Bus_models[1].Rotation = new Vector3(0,  Game1.Bus_models[1].Rotation.Y- theta, 0);
               Vector3 off2 = new Vector3((float)(dollyx * Math.Sin(Rotation.Y)), 0, (float)(dollyx * Math.Cos(Rotation.Y)));
               Game1.Bus_models[1].Position = position+off2;



            float volante_fd = 2.95f;
            float volante_hw = .38f;


            Vector3 targetVolante = new Vector3((float)(Position.X - volante_fd * Math.Sin(Rotation.Y) - volante_hw * Math.Cos(Rotation.Y)), (float)heigth + .90f, (float)(Position.Z - volante_fd * Math.Cos(Rotation.Y) + volante_hw * Math.Sin(Rotation.Y)));

            Vector3 rot_volante = new Vector3((float)Math.Cos( -last_steerAngle * 18 + 1.57f) * .5f, Rotation.Y - last_steerAngle * 18 + 1.57f, (float)Math.Sin(- last_steerAngle * 18 + 1.57f) * .5f);
        //    Vector3 rot_volante2 = new Vector3(0.0f,0, 0.5f);
            Game1.Bus_models[8].Position = targetVolante;
            Game1.Bus_models[8].Rotation = rot_volante;


            Vector3 targetFL = new Vector3((float)(Position.X - fd * Math.Sin(Rotation.Y) - hw * Math.Cos(Rotation.Y)), (float)heigth, (float)(Position.Z - fd * Math.Cos(Rotation.Y) + hw * Math.Sin(Rotation.Y)));
            targetFL.Y = Height_test(targetFL, 2)+.1f;
            Vector3 rot = new Vector3(Game1.Bus_models[2].Rotation.X - last_dis, Rotation.Y - last_steerAngle, 0);
            Game1.Bus_models[2].Position = targetFL;
            Game1.Bus_models[2].Rotation = rot;
            rot = new Vector3(Game1.Bus_models[3].Rotation.X + last_dis, Rotation.Y + 3.1415f - last_steerAngle, 0);
            Vector3 targetFR = new Vector3((float)(Position.X - fd * Math.Sin(Rotation.Y) + hw * Math.Cos(Rotation.Y)), (float)heigth, (float)(Position.Z - fd * Math.Cos(Rotation.Y) - hw * Math.Sin(Rotation.Y)));

            targetFR.Y = Height_test(targetFR, 3) + .1f; 
            Game1.Bus_models[3].Position = targetFR;
            Game1.Bus_models[3].Rotation = rot;
            rot = new Vector3(Game1.Bus_models[4].Rotation.X + last_dis, Rotation.Y + 3.1415f, 0);
            Vector3 targetRR = new Vector3((float)(Position.X + fd * Math.Sin(Rotation.Y) + hw * Math.Cos(Rotation.Y)), (float)heigth, (float)(Position.Z + fd * Math.Cos(Rotation.Y) - hw * Math.Sin(Rotation.Y)));
            targetRR.Y = Height_test(targetRR, 4) + .1f;
            Game1.Bus_models[4].Position = targetRR;
            Game1.Bus_models[4].Rotation = rot;

            rot = new Vector3(Game1.Bus_models[5].Rotation.X - last_dis, Rotation.Y , 0);
            Vector3 targetRL = new Vector3((float)(Position.X + fd * Math.Sin(Rotation.Y) - hw * Math.Cos(Rotation.Y)), (float)heigth, (float)(Position.Z + fd * Math.Cos(Rotation.Y) + hw * Math.Sin(Rotation.Y)));
            targetRL.Y = Height_test(targetRL, 5) + .1f;
            Game1.Bus_models[5].Position = targetRL;
            Game1.Bus_models[5].Rotation = rot;

      
            float dollyrotation = Game1.Bus_models[1].Rotation.Y;
            float FX = 2.85F;
            rot = new Vector3(Game1.Bus_models[6].Rotation.X - last_dis, dollyrotation, 0);
            Vector3 targetRRR = position + new Vector3((float)(dollyx * Math.Sin(Rotation.Y) + (FX) * Math.Sin(dollyrotation) - hw * Math.Cos(dollyrotation)), 0, (float)(dollyx * Math.Cos(Rotation.Y) + (FX) * Math.Cos(dollyrotation) + hw * Math.Sin(dollyrotation)));
           
            targetRRR.Y = Height_test(targetRRR, 6) + .1f;
            Game1.Bus_models[6].Position = targetRRR;
            Game1.Bus_models[6].Rotation = rot;

            rot = new Vector3(Game1.Bus_models[7].Rotation.X + last_dis, dollyrotation+3.141592f, 0);
            Vector3 targetRRL = position + new Vector3((float)(dollyx * Math.Sin(Rotation.Y) + (FX) * Math.Sin(dollyrotation) +hw * Math.Cos(dollyrotation)), 0, (float)(dollyx * Math.Cos(Rotation.Y) + (FX) * Math.Cos(dollyrotation) - hw * Math.Sin(dollyrotation)));
            targetRRL.Y = Height_test(targetRRL, 7) + .1f;
            Game1.Bus_models[7].Position = targetRRL;
            Game1.Bus_models[7].Rotation = rot;
           



            int crash = crash_test(targetFL, 1) + crash_test(targetFR, 2) + crash_test(targetRL, 3) + crash_test(targetRR, 4);
if ( crash !=0)
{
//speed=speed*-.2f;
}



            


          //  Rotation = new Vector3(0, rotation.W,0);
        }




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


        public BoundingSphere BoundingSphere2
        {
            get
            {
                
                BoundingSphere transformed = boundingSphere;
              

                return transformed;
            }
        }
        public BusModel(Model Model, Vector3 Position, Vector3 Rotation,
            Vector3 Scale, GraphicsDevice graphicsDevice)
        {
            this.Model = Model;
            topSpeeds = new float[8];
            accelerations = new float[8];


            topSpeeds[0] = 25.0f/8; accelerations[0] = 2.2f/2;
            topSpeeds[1] = 45.0f / 8; accelerations[1] = 1.8f / 2;
            topSpeeds[2] = 70.0f / 8; accelerations[2] = 1.7f / 2;
            topSpeeds[3] = 95.0f / 8; accelerations[3] = 1.66f / 2;
            topSpeeds[4] = 110.0f / 8; accelerations[4] = 1.5f / 2;
            topSpeeds[5] = 115.0f / 8; accelerations[5] = 1.2f / 2;
            topSpeeds[6] = 120.0f / 8; accelerations[6] = .9f / 2;
            topSpeeds[7] = 130.0f / 8; accelerations[7] = .5f / 2;

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





        public void setpars(ModelMesh mesh, int i, Effect effect)
        {
            effect.Parameters["alphaenabled"].SetValue(false);
            effect.Parameters["bumplevel"].SetValue(1.0f);
            effect.Parameters["SpecularColor"].SetValue(new Vector4(0.0f, 0.0f, 0.0f, 0.0f));
            effect.Parameters["SpecularIntensity"].SetValue(0.0f);

            if ( mesh.Name.Contains("trans"))
            {
                effect.Parameters["alphaenabled"].SetValue(true);
            }
        }
        public void Draw(Matrix View, Matrix Projection, Vector3 camerapos)
        {
            Matrix baseWorld = Matrix.CreateScale(Scale) * Matrix.CreateFromYawPitchRoll(Rotation.Y, Rotation.X, Rotation.Z) * Matrix.CreateTranslation(Position);

            foreach (ModelMesh mesh in Model.Meshes)
            {
                int i = 0;
                foreach (Effect effect in mesh.Effects)
                {
                    i++;

                    effect.CurrentTechnique = effect.Techniques["Textured"];

                    effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);//baseWorld);
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
                    setpars(mesh, i, effect);

                }
                mesh.Draw();
            }
            Draw2(View, Projection, camerapos);
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
                    effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);//baseWorld);
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
                if (mesh.Name.Contains("trans"))
                {

                    foreach (Effect effect in mesh.Effects)
                    {
                        effect.CurrentTechnique = effect.Techniques["Reflection"];

                        i++;
                        effect.Parameters["World"].SetValue(mesh.ParentBone.Transform * baseWorld);//baseWorld);
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

