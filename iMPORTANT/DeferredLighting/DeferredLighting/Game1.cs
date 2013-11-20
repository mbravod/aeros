using System;
using System.Collections.Generic;
using System.Drawing;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using System.Windows.Forms;
using SlimDX;
using SlimDX.DirectInput;

namespace MyGame
{

    enum tile_history { main_vehicle_pos=0, main_vehicle_crash_FR, main_vehicle_crash_FL,  main_vehicle_crash_RR, main_vehicle_crash_RL};
    struct Important_positions_struct
    {
        public Microsoft.Xna.Framework.Vector3 position;
        public String Name;
    };
    

    public class Game1 : Microsoft.Xna.Framework.Game
    {
        int scale = 2;
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;

        List<CModel> models = new List<CModel>();
       public static List<BusModel> Bus_models = new List<BusModel>();
        Camera camera;

Microsoft.Xna.Framework.Input. MouseState lastMouseState;







        Skybox skybox;
 
        private TextureCube skyboxTexture;
        colision_map map;
        private static DirectInput dinput;


        Joystick joystick;
        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            Content.RootDirectory = "Content";

            graphics.PreferredBackBufferWidth =(int) 1280*scale;//1280;
            graphics.PreferredBackBufferHeight = (int)720 / 3 * scale;// 800;
            graphics.PreferMultiSampling = true;
            map= new colision_map();
            Form gameWindowForm = (Form)Form.FromHandle(this.Window.Handle);
      
                    if (dinput == null)
                        dinput = new DirectInput();

                  //  Devices = new List<GamePad>();
                    int k = 0;

                    foreach (DeviceInstance device in dinput.GetDevices(DeviceClass.GameController, DeviceEnumerationFlags.AttachedOnly))
                    {
                        k++;


                         joystick = new Joystick(dinput, device.InstanceGuid);
                        joystick.SetCooperativeLevel(gameWindowForm, CooperativeLevel.Exclusive | CooperativeLevel.Background);//CooperativeLevel.Background | CooperativeLevel.Nonexclusive);
                        foreach (DeviceObjectInstance deviceObject in joystick.GetObjects())//
                        {
                            if ((deviceObject.ObjectType & ObjectDeviceType.Axis) != 0)
                            {
                                joystick.GetObjectPropertiesById((int)deviceObject.ObjectType).SetRange(-5000, 5000);
                            }
                        }
                        //joystick.Properties.AxisMode = DeviceAxisMode.Absolute;

                        joystick.Acquire();

                    }

   
        }
//  private TextureCube skyBoxTexture;
        // Called when the game should load its content
     //  public  static Vector3 car_position = new Vector3((float)-26.844f, -0.010f ,-27.66f);
      // public static Vector3 car_position = new Vector3((float)-0.0f, -0.000f, -0.0f);

        public static Microsoft.Xna.Framework.Vector3 car_position = new Microsoft.Xna.Framework.Vector3(287.6404f, 0.0f, 403.081f);
         Important_positions_struct[] carpos;
         RealSkyBox skybox2;
         Viewport defaultViewport;
         Viewport leftViewport;
         Viewport centerViewport;
         Viewport rightViewport;
        protected override void LoadContent()
        {

            
            defaultViewport = GraphicsDevice.Viewport;
            leftViewport = defaultViewport;
            centerViewport = defaultViewport;
            rightViewport = defaultViewport;
            leftViewport.Width = leftViewport.Width / 3;
            centerViewport.Width = rightViewport.Width / 3;
            rightViewport.Width = rightViewport.Width /3;
            centerViewport.X = leftViewport.Width;
            rightViewport.X = leftViewport.Width*2;
            spriteBatch = new SpriteBatch(GraphicsDevice);


      carpos = new Important_positions_struct[4];

      models.Add(new CModel(Content.Load<Model>("Models/CAR2"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.7f), GraphicsDevice));
        //   models.Add(new CModel(Content.Load<Model>("Models/world"), Vector3.Zero, Vector3.Zero, new Vector3(1.00f), GraphicsDevice));
      models.Add(new CModel(Content.Load<Model>("Models/world2"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(1.00f), GraphicsDevice));
      models.Add(new CModel(Content.Load<Model>("Models/worldD"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(1.00f), GraphicsDevice));
      models.Add(new CModel(Content.Load<Model>("Models/worldU"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(1.00f), GraphicsDevice));
      models.Add(new CModel(Content.Load<Model>("Models/worldM"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(1.00f), GraphicsDevice));

      Bus_models.Add(new BusModel(Content.Load<Model>("Models/BUS_FRONT"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/BUS_REAR"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire2"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire2"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));

      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));
      Bus_models.Add(new BusModel(Content.Load<Model>("Models/tire"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));

      Bus_models.Add(new BusModel(Content.Load<Model>("Models/volante"), Microsoft.Xna.Framework.Vector3.Zero, Microsoft.Xna.Framework.Vector3.Zero, new Microsoft.Xna.Framework.Vector3(0.800f), GraphicsDevice));



            TextureCube tc;
            tc = new TextureCube(GraphicsDevice, 1024, false, SurfaceFormat.Color);
            tc.SetData<byte>(CubeMapFace.PositiveX, RealSkyBox.getface("270", GraphicsDevice, 23));
            tc.SetData<byte>(CubeMapFace.NegativeZ, RealSkyBox.getface("0", GraphicsDevice, 23));
            tc.SetData<byte>(CubeMapFace.NegativeX, RealSkyBox.getface("90", GraphicsDevice, 23));
            tc.SetData<byte>(CubeMapFace.PositiveZ, RealSkyBox.getface("180", GraphicsDevice, 23));
            tc.SetData<byte>(CubeMapFace.PositiveY, RealSkyBox.getface("up", GraphicsDevice, 23));

            skybox2 = new RealSkyBox(Content);
            skybox2.skyBoxTexture = tc;

            //   models.Add(new CModel(Content.Load<Model>("Models/PRUEBA"), Vector3.Zero, Vector3.Zero, new Vector3(0.26f), GraphicsDevice));
           CModel.skyboxTexture = Content.Load<TextureCube>("Skyboxes/Nice");
        //    CModel.skyboxTexture  = Content.Load<TextureCube>("Skyboxes/Sunset");
           CModel.effect = Content.Load<Microsoft.Xna.Framework.Graphics.Effect>("Effects/Reflection");
            skybox = new Skybox("Skyboxes/Nice", Content); 
           // skybox = new Skybox("Skyboxes/Sunset", Content); 
           yalt = 1.100f;
            dis = 1.800f;
            angle = -0.0f;
            translation = new Microsoft.Xna.Framework.Vector3(((float)Math.Sin(angle)) * dis, yalt, ((float)Math.Cos(angle)) * dis);
          
     camera = new TargetCamera(translation,car_position, GraphicsDevice);
     yxalt = .600f;
     lastMouseState = Microsoft.Xna.Framework.Input.Mouse.GetState();
            //carga el escenario
           resolve_collision.generate_last_index(100);
           compute_tiles();


        
           Bus_models[0].position = car_position;
           Bus_models[0].Rotation = new Microsoft.Xna.Framework.Vector3(0, 0, 0);
        }

        struct tile_info_struct
        {
            public int dx;
            public int dy;
            public int subdx;
           public int subdy;

        };

        tile_info_struct tile_xy_new, tile_xy_old;

        void compute_tiles()
        {
            resolve_collision.get_tile_info(Bus_models[0].Position.X, Bus_models[0].Position.Y, Bus_models[0].Position.Z, (int)tile_history.main_vehicle_pos);
            //resuelve el mapa de colisiones 3+1+3
            tile_xy_new.subdx = resolve_collision.subtile_dx_i;
            tile_xy_new.subdy = resolve_collision.subtile_dy_i;
            tile_xy_new.dx = resolve_collision.tilex_i;
            tile_xy_new.dy = resolve_collision.tiley_i;
            int ix, jx;
            if ( (tile_xy_new.subdx == tile_xy_old.subdx)&&(tile_xy_new.subdy == tile_xy_old.subdy)&&(tile_xy_new.dx == tile_xy_old.dx)&&(tile_xy_new.dy == tile_xy_old.dy))
            {
            }
            else
            {
                tile_xy_old.subdx = tile_xy_new.subdx;
                tile_xy_old.subdy = tile_xy_new.subdy;
                tile_xy_old.dx = tile_xy_new.dx;
                tile_xy_old.dy = tile_xy_new.dy;

                //colision_map
                colision_map.free_all();
                for (ix = -3; ix < 4; ix++)
                {
                    for (jx = -3; jx < 4; jx++)
                    {
                        resolve_collision.check_loaded(tile_xy_new.dx, tile_xy_new.dy, tile_xy_new.subdx + jx, tile_xy_new.subdy + ix);
                    }

                }


                for (ix = -3; ix < 4; ix++)
                {
                    for (jx = -3; jx < 4; jx++)
                    {
                        //busca que no este en proceso de carga
                        int result = resolve_collision.check_loaded(tile_xy_new.dx, tile_xy_new.dy, tile_xy_new.subdx + jx, tile_xy_new.subdy + ix);
                        if (result == 0)
                        {
                            //busca un lugar en el buffer
                            result = resolve_collision.generate_request(tile_xy_new.dx, tile_xy_new.dy, tile_xy_new.subdx + jx, tile_xy_new.subdy + ix);
                            if (result != 1)
                            {
                                result = result;
                            }
                        }
                    }
                }
            }
        }

        private static  int compute_px_tile(int px,int py,int tilex,int tiley,int subtilex,int subtiley,int mpoint)
        {
            if (px<0){ px+=1024;subtilex--;}
            if (px>1023){ px-=1024;subtilex++;}

            if (py<0){ py+=1024;subtiley--;}
            if (py>1023){ py-=1024;subtiley++;}

            if (subtilex < 0)  { subtilex += 8;   tilex--;  }
            if (subtilex > 7) { subtilex -= 8;tilex++;  }

            if (subtiley < 0)     { subtiley += 8; tiley--;  }
            if (subtiley > 7) { subtiley -= 8; tiley++;  }

            int solution = 255 & resolve_collision.get_tile_xy(tilex, tiley, subtilex, subtiley, px, py, mpoint);
        return solution;
        }
      public  static double crash_angle;
     public   static int compute_tile_point_crash(float x, float y, float z, int mpoint)
        {
            resolve_collision.get_tile_info(x, y, z, mpoint);
            //resuelve el mapa de colisiones 3+1+3

            int px = (int)resolve_collision.offx;
            int py = (int)resolve_collision.offy;
            int [] circle= new int[32];
            if ((px<3)||(py<3) ){
                px = px;
            }
            circle[0] = compute_px_tile(px+0,py-6,resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i,mpoint);
            circle[1] = compute_px_tile(px + 1, py - 6, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[2] = compute_px_tile(px + 2, py - 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[3] = compute_px_tile(px + 3, py - 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[4] = compute_px_tile(px + 4, py - 4, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[5] = compute_px_tile(px + 5, py - 3, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[6] = compute_px_tile(px + 5, py - 2, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[7] = compute_px_tile(px + 6, py - 1, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);

            circle[8] = compute_px_tile(px + 6, py - 0, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[9] = compute_px_tile(px + 6, py + 1, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[10] = compute_px_tile(px + 5, py + 2, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[11] = compute_px_tile(px + 5, py + 3, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[12] = compute_px_tile(px + 4, py + 4, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[13] = compute_px_tile(px + 3, py + 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[14] = compute_px_tile(px + 2, py + 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[15] = compute_px_tile(px + 1, py + 6, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);

            circle[16] = compute_px_tile(px + 0, py + 6, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[17] = compute_px_tile(px - 1, py + 6, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[18] = compute_px_tile(px - 2, py + 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[19] = compute_px_tile(px - 3, py + 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[20] = compute_px_tile(px - 4, py + 4, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[21] = compute_px_tile(px - 5, py + 3, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[22] = compute_px_tile(px - 5, py + 2, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[23] = compute_px_tile(px - 6, py + 1, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);

            circle[24] = compute_px_tile(px - 6, py + 0, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[25] = compute_px_tile(px - 6, py - 1, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[26] = compute_px_tile(px - 5, py - 2, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[27] = compute_px_tile(px - 5, py - 3, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[28] = compute_px_tile(px - 4, py - 4, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[29] = compute_px_tile(px - 3, py - 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[30] = compute_px_tile(px - 2, py - 5, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            circle[31] = compute_px_tile(px - 1, py - 6, resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, mpoint);
            int i,j,k,l=0;
            int[] positions = new int[8];
            for (i = 1; i <= 32; i++)
            {
                k=i&31;
                j=i-1;
                if (circle[k] != circle[j])
                {
                    positions[l] = j;
                    l++;
                }
            }
            double angle=0;
            double angle2 = 0;

            if (l == 2)
            {
               angle = (positions[0] * 360 / 32 + positions[1] * 360 / 32 + 180) / 2;
              angle= Math.Tan(MathHelper.ToRadians((float)angle+90));
              crash_angle = angle;
              return 1;
            }else{
                if ((l == 0) && (circle[0]==0))
                {   //no collision
                    return 0;
                }
                if ((l == 0) && (circle[0] == 255))
                {   //full colision
                    return 2;
                }

                if (l == 4)
                {
                    angle = (positions[0] * 360 / 32 + positions[1] * 360 / 32 + 180) / 2;
                    angle2 = (positions[2] * 360 / 32 + positions[3] * 360 / 32 + 180) / 2;
                    angle = (angle + angle2) / 2;
                    angle = Math.Tan(MathHelper.ToRadians((float)angle + 90));
                    crash_angle = angle;
                    return 1;
                } 

                angle = angle;
                return -1;
        }


            
        }


       public static int compute_tile_point(float x,float y,float z,int mpoint)
        {
           // x *= .4f * 0.98303449981451712625200939779894f*1.00127f;
           // z *= .4f * 0.98303449981451712625200939779894f * 1.00127f;
            resolve_collision.get_tile_info(x, y, z,mpoint);
            //resuelve el mapa de colisiones 3+1+3
    
            int px =(int) resolve_collision.offx;
            int py = (int) resolve_collision.offy;//591 //588
        int solution=    resolve_collision.get_tile_xy(resolve_collision.tilex_i, resolve_collision.tiley_i, resolve_collision.subtile_dx_i, resolve_collision.subtile_dy_i, px, py,mpoint);
        int height_i = solution / 256;
        float height = (height_i * 512.0f )/ 65536;
        resolve_collision.last_index[mpoint].last_height = height;
      
                
        if (solution != 0)
        {
            roadcode = solution & 255;
        }
        else
        {
            roadcode = -1;
        }

        return roadcode;
        }
       public static int roadcode = 0;
        // Called when the game should update itself
        protected override void Update(GameTime gameTime)
        {
          
            updateCamera(gameTime);
          
            base.Update(gameTime);
              compute_tiles();


        }
        float angle;
        float yalt;
        float dis;
        float yxalt;
        Microsoft.Xna.Framework.Vector3 translation;

    

        float wheel_angle = 0;

  

        public static int map_loaded = 0;
        public static int maps_loaded = 0;
        public int mode = 1;
        public float driver_pos = 2.6f;
        public float driver_posx = .42f;
        Microsoft.Xna.Framework.Vector3 tempbus_target_D, tempbus_target_C, tempbus_target_I;
        Microsoft.Xna.Framework.Vector3 tempbus_Position_I, tempbus_Position_C, tempbus_Position_D;
        public float rangle, langle;




         int pss = 0;
            int xval=0;
            int yval = 0;
            int bval = 0;
        void updateCamera(GameTime gameTime)
        {

         colision_map.load_map();
   

            JoystickState state = new JoystickState();
                        bool[] buttonData;
                        int[] hats, uv;
                        SlimDX.Result r;

                        
                        try
                        {

                            if ((r = joystick.Acquire()).IsFailure)
                                throw new DirectInputException(r);

                            if ((joystick.Capabilities.Flags & DeviceFlags.PolledDevice) != 0)
                            {
                                if ((r = joystick.Poll()).IsFailure)
                                    throw new DirectInputException(r);
                            }

                            
                            state = joystick.GetCurrentState();
                       //    state = joystick.GetCurrentState();
                            if (SlimDX.Result.Last.IsFailure)
                                throw new DirectInputException(SlimDX.Result.Last);

                            buttonData = state.GetButtons();
                            hats = state.GetPointOfViewControllers();
                            uv = state.GetForceSliders();

                            
                        }
                        catch (DirectInputException e)
                        {
                            int I = 0;

                        }
                            if (state.X !=0){
                                xval = state.X;

                            }
                            if (state.Y != 0)
                            {
                                yval = (-1*(state.Y-5000));
                            }

                            if (state.RotationZ<1)
                            {
                                bval = -1 * (state.RotationZ);
                            }
                            float iangle;
                            iangle=(((float)xval))*1.4f/5000.0f/3.1415f;
                            float iaccel;
                                iaccel = yval / 100.0f + 1.0f;
                            iaccel = (float)Math.Log10((double)iaccel)+1.0f;
                            iaccel = (float)Math.Pow(2, (double)iaccel)-2;
                            float daccel;
                            daccel = bval / 100.0f + 1.0f;
                            daccel = (float)Math.Log10((double)daccel) + 1.0f;
                            daccel = (float)Math.Pow(3, (double)daccel) - 3;

            // Get the new keyboard and mouse state
         Microsoft.Xna.Framework.Input.MouseState mouseState = Microsoft.Xna.Framework.Input.Mouse.GetState();
            Microsoft.Xna.Framework.Input.KeyboardState keyState = Microsoft.Xna.Framework.Input.Keyboard.GetState();

            // Determine how much the camera should turn
            float deltaX = ((float)lastMouseState.X - (float)mouseState.X)*0.02f;
            float deltaY =( (float)lastMouseState.Y - (float)mouseState.Y)*0.02f;

            // Rotate the camera
           /// ((FreeCamera)camera).Rotate(deltaX * .01f, deltaY * .01f);

            double steer=0;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.I))
            {
                driver_pos = 2.42f;
                mode = 1;
                dis = 1.36f;
                yalt = 1.45f;
                angle = -2.9115f;
                yxalt = 1.23f;
                rangle = -1.45f;// -2.34f;
                langle =1.45f;//2.34f;
            }

            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.Escape))
            {
                Bus_models[0].position = new Microsoft.Xna.Framework.Vector3(1228.729f, 0.2f, -3246.247f);
               
            }
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.O))
            {
                mode = 0;
                dis = 13.5f;
                yalt = 6.0f;
                angle = 0;
                yxalt = 2.44f;
            }

            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.P))
            {
                mode = 0;
                dis = 4.3f;
                yalt = 1.2f;
                angle =4.77f;
                yxalt = 1.4f;


            }

            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D7)) rangle += .010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D8)) rangle -= .010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D9)) langle += .0100f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D0)) langle -= .0100f;  //100 km/hr

            if (mode == 0)
            {

                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.Y)) driver_pos += .010f;
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.U)) driver_pos -= .010f;
            }
            else
            {

                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.Y)) driver_pos += .0010f;
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.U)) driver_pos -= .0010f;
            }

            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D5)) driver_posx += .0010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D6)) driver_posx -= .0010f;


            // Determine in which direction to move the camera
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.Z)) dis += .010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.X)) dis -= .010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.C)) dis += .0200f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.V)) dis -= .0200f;  //100 km/hr
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.Q)) yalt += 5.0f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.W)) yalt += .010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.S)) yalt -= .010f;
            if (mode == 0)
            {
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.A)) angle += .02f;
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D)) angle -= .02f;
            }
            else
            {
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.D)) angle += .01f;
                if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.A)) angle -= .01f;
            }
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.G)) yxalt -= 0.010f;
            if (keyState.IsKeyDown(Microsoft.Xna.Framework.Input.Keys.T)) yxalt += 0.010f;


            Bus_models[0].ProcessKeyboard(gameTime, iangle, iaccel, daccel);
            Bus_models[0].Update(gameTime);
            Bus_models[0].doit();
           
            if (mode == 1)
            {
                tempbus_Position_I = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - driver_posx * Math.Cos(Bus_models[0].Rotation.Y)), yalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + driver_posx * Math.Sin(Bus_models[0].Rotation.Y)));
                tempbus_Position_C = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - driver_posx * Math.Cos(Bus_models[0].Rotation.Y)), yalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + driver_posx * Math.Sin(Bus_models[0].Rotation.Y)));
                tempbus_Position_D = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - driver_posx * Math.Cos(Bus_models[0].Rotation.Y)), yalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + driver_posx * Math.Sin(Bus_models[0].Rotation.Y)));

               // ((TargetCamera)camera).Position = target;
                //  ((TargetCamera)camera).Target = new Vector3(car_position.X, yxalt, car_position.Z);
                tempbus_target_I = new Microsoft.Xna.Framework.Vector3((float)(tempbus_Position_I.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + langle))), yalt - (yalt - yxalt) * .6f, (float)(tempbus_Position_I.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + langle))));
                tempbus_target_C = new Microsoft.Xna.Framework.Vector3((float)(tempbus_Position_I.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle))), yxalt, (float)(tempbus_Position_I.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle))));
                tempbus_target_D = new Microsoft.Xna.Framework.Vector3((float)(tempbus_Position_I.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + rangle))), yalt - (yalt - yxalt) * .3f, (float)(tempbus_Position_I.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + rangle))));

               
            }


            if (mode == 0)
            {

                tempbus_target_I = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - 0.3 * Math.Cos(Bus_models[0].Rotation.Y)), yxalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + .3f * Math.Sin(Bus_models[0].Rotation.Y)));
                tempbus_target_C = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - 0.3 * Math.Cos(Bus_models[0].Rotation.Y)), yxalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + .3f * Math.Sin(Bus_models[0].Rotation.Y)));
                tempbus_target_D = new Microsoft.Xna.Framework.Vector3((float)(Bus_models[0].Position.X - driver_pos * Math.Sin(Bus_models[0].Rotation.Y) - 0.3 * Math.Cos(Bus_models[0].Rotation.Y)), yxalt, (float)(Bus_models[0].Position.Z - driver_pos * Math.Cos(Bus_models[0].Rotation.Y) + .3f * Math.Sin(Bus_models[0].Rotation.Y)));

                tempbus_Position_I = new Microsoft.Xna.Framework.Vector3((float)(tempbus_target_I.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle - 1.57f))), yalt, (float)(tempbus_target_I.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle - 1.57f))));
                tempbus_Position_C = new Microsoft.Xna.Framework.Vector3((float)(tempbus_target_C.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle))), yalt, (float)(tempbus_target_C.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle))));
                tempbus_Position_D = new Microsoft.Xna.Framework.Vector3((float)(tempbus_target_D.X - dis * (Math.Sin(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + 1.57f))), yalt, (float)(tempbus_target_D.Z - dis * (Math.Cos(Bus_models[0].Rotation.Y + MathHelper.ToRadians(180) - angle + 1.57f))));

            }

           

            double fps = (1000 / gameTime.ElapsedGameTime.TotalMilliseconds);
            fps = Math.Round(fps, 0);
       
           this.Window.Title =" pos "+roadcode+" th "+BusModel.last_theta+ " LF "+maps_loaded+" Distance "+dis+ ","+ fps.ToString() + " FPS";    
            // Update the mouse state
            lastMouseState = mouseState;
        }

        // Called when the game should draw itself
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Microsoft.Xna.Framework.Color.Black);
            RasterizerState originalRasterizerState = graphics.GraphicsDevice.RasterizerState;
            RasterizerState rasterizerState = new RasterizerState();
            rasterizerState.CullMode = CullMode.None;
            graphics.GraphicsDevice.RasterizerState = rasterizerState;

            skybox.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
 
            graphics.GraphicsDevice.RasterizerState = originalRasterizerState;

            rasterizerState = new RasterizerState();
            rasterizerState.CullMode = CullMode.CullCounterClockwiseFace;
        //    rasterizerState.CullMode = CullMode.CullClockwiseFace;
        //    rasterizerState.CullMode = CullMode.None;
            graphics.GraphicsDevice.RasterizerState = rasterizerState;
            GraphicsDevice.Viewport = leftViewport;
            ((TargetCamera)camera).Target = new Microsoft.Xna.Framework.Vector3(tempbus_target_I.X, tempbus_target_I.Y, tempbus_target_I.Z);
            ((TargetCamera)camera).Position = new Microsoft.Xna.Framework.Vector3(tempbus_Position_I.X, tempbus_Position_I.Y, tempbus_Position_I.Z);
            camera.Update();
            skybox2.Draw(camera.Projection,((TargetCamera)camera).Target, ((TargetCamera)camera).Position, -1.57f, graphics, GraphicsDevice);
            foreach (CModel model in models)
            {
                if (camera.BoundingVolumeIsInView(model.BoundingSphere))
                {
                    model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
                }
            }



            foreach (BusModel model in Bus_models)
            {
                    model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);       
            }
          
            //render cenetr
            graphics.GraphicsDevice.RasterizerState = originalRasterizerState;
            GraphicsDevice.Viewport = centerViewport;
            ((TargetCamera)camera).Target = new Microsoft.Xna.Framework.Vector3(tempbus_target_C.X, tempbus_target_C.Y, tempbus_target_C.Z);
            ((TargetCamera)camera).Position = new Microsoft.Xna.Framework.Vector3(tempbus_Position_C.X, tempbus_Position_C.Y, tempbus_Position_C.Z);
            camera.Update();
            skybox2.Draw(camera.Projection, ((TargetCamera)camera).Target, ((TargetCamera)camera).Position, -0.0f, graphics, GraphicsDevice);
            foreach (CModel model in models)
            {
                if (camera.BoundingVolumeIsInView(model.BoundingSphere))
                {
                    model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
                }
            }
            foreach (BusModel model in Bus_models)
            {
                model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
            }
       
             

         
            //render Rigth
            graphics.GraphicsDevice.RasterizerState = originalRasterizerState;
            GraphicsDevice.Viewport = rightViewport;
            ((TargetCamera)camera).Target = new Microsoft.Xna.Framework.Vector3(tempbus_target_D.X, tempbus_target_D.Y, tempbus_target_D.Z);
            ((TargetCamera)camera).Position = new Microsoft.Xna.Framework.Vector3(tempbus_Position_D.X, tempbus_Position_D.Y, tempbus_Position_D.Z);
            camera.Update();
            skybox2.Draw(camera.Projection, ((TargetCamera)camera).Target, ((TargetCamera)camera).Position, +1.57f, graphics, GraphicsDevice);
            foreach (CModel model in models)
            {
                if (camera.BoundingVolumeIsInView(model.BoundingSphere))
                {
                    model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
                }
            }
            foreach (BusModel model in Bus_models)
            {

                model.Draw(camera.View, camera.Projection, ((TargetCamera)camera).Position);
            }
        

            graphics.GraphicsDevice.RasterizerState = originalRasterizerState;
          
            base.Draw(gameTime);
        }
    }
}
