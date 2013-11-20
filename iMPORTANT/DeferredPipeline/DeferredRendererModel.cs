using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Content.Pipeline;
using Microsoft.Xna.Framework.Content.Pipeline.Graphics;
using Microsoft.Xna.Framework.Content.Pipeline.Processors;
using System.Diagnostics;
using System.ComponentModel;
using System.IO;

namespace DeferredPipeline
{
    [ContentProcessor(DisplayName = "3ds Max Renderer Model")]
    public class DeferredRendererModel : ModelProcessor
    {
        String directory;


























        public override ModelContent Process(NodeContent input, ContentProcessorContext context)
        {
            if (input == null)
            {
                throw new ArgumentNullException("input");
            }
            directory = Path.GetDirectoryName(input.Identity.SourceFilename);
            LookUpTextures(input);
            return base.Process(input, context);
        }


        [Browsable(false)]
        public override bool GenerateTangentFrames
        {
            get { return true; }
            set { }
        }












        #region normal_map

        [DisplayName("Normal Map Texture")]
        [Description("If set, this file will be used as the normal map on the model, " +
        "overriding anything found in the opaque data.")]
        [DefaultValue("")]
        public string NormalMapTexture
        {
            get { return normalMapTexture; }
            set { normalMapTexture = value; }
        }
        private string normalMapTexture;

        [DisplayName("Normal Map Key")]
        [Description("This will be the key that will be used to search the normal map in the opaque data of the model")]
        [DefaultValue("Bump")]
        public string NormalMapKey
        {
            get { return normalMapKey; }
            set { normalMapKey = value; }
        }

        private string normalMapKey = "Bump";
        #endregion


        #region alpha_map

        [DisplayName("Alpha Map Texture")]
        [Description("If set, this file will be used as the normal map on the model, " +
        "overriding anything found in the opaque data.")]
        [DefaultValue("")]
        public string AlphaMapTexture
        {
            get { return alphaMapTexture; }
            set { alphaMapTexture = value; }
        }
        private string alphaMapTexture;


        [DisplayName("Alpha Map Key")]
        [Description("This will be the key that will be used to search the alpha map in the opaque data of the model")]
        [DefaultValue("Transparency")]
        public string AlphaMapKey
        {
            get { return alphaMapKey; }
            set { alphaMapKey = value; }
        }
        private string alphaMapKey = "Transparency";
        #endregion


        #region reflection_map

        [DisplayName("Reflection Map Texture")]
        [Description("If set, this file will be used as the reflection map on the model, " +
        "overriding anything found in the opaque data.")]
        [DefaultValue("")]
        public string ReflectionMapTexture
        {
            get { return reflectionMapTexture; }
            set { reflectionMapTexture = value; }
        }
        private string reflectionMapTexture;


        [DisplayName("Reflection Map Key")]
        [Description("This will be the key that will be used to search the reflection map in the opaque data of the model")]
        [DefaultValue("Reflection")]
        public string ReflectionMapKey
        {
            get { return reflectionMapKey; }
            set { reflectionMapKey = value; }
        }
        private string reflectionMapKey = "Reflection";
        #endregion


        #region ambient_map

        [DisplayName("Ambient Map Texture")]
        [Description("If set, this file will be used as the ambient map on the model, " +
        "overriding anything found in the opaque data.")]
        [DefaultValue("")]
        public string AmbientMapTexture
        {
            get { return ambientMapTexture; }
            set { ambientMapTexture = value; }
        }
        private string ambientMapTexture;


        [DisplayName("Ambient Map Key")]
        [Description("This will be the key that will be used to search the ambient map in the opaque data of the model")]
        [DefaultValue("Ambient")]
        public string AmbientMapKey
        {
            get { return ambientMapKey; }
            set { ambientMapKey = value; }
        }
        private string ambientMapKey = "Ambient";
        #endregion


        #region specular_map
        [DisplayName("Specular Map Texture")]
        [Description("If set, this file will be used as the specular map on the model, " +
        "overriding anything found in the opaque data.")]
        [DefaultValue("")]
        public string SpecularMapTexture
        {
            get { return specularMapTexture; }
            set { specularMapTexture = value; }
        }
        private string specularMapTexture;

        [DisplayName("Specular Map Key")]
        [Description("This will be the key that will be used to search the specular map in the opaque data of the model")]
        [DefaultValue("Specular")]
        public string SpecularMapKey
        {
            get { return specularMapKey; }
            set { specularMapKey = value; }
        }
        private string specularMapKey = "Specular";
             #endregion


        static IList<string> acceptableVertexChannelNames =
        new string[]
    {
        VertexChannelNames.TextureCoordinate(0),
        VertexChannelNames.Normal(0),
        VertexChannelNames.Binormal(0),
        VertexChannelNames.Tangent(0),
    };


        Microsoft.Xna.Framework.Vector3 SpecularColor;
        float SpecularPower;


        protected override void ProcessVertexChannel(GeometryContent geometry,
                                                    int vertexChannelIndex, ContentProcessorContext context)
        {
            String vertexChannelName =
                geometry.Vertices.Channels[vertexChannelIndex].Name;

            // if this vertex channel has an acceptable names, process it as normal.
            if (acceptableVertexChannelNames.Contains(vertexChannelName))
            {
                base.ProcessVertexChannel(geometry, vertexChannelIndex, context);
            }
            // otherwise, remove it from the vertex channels; it's just extra data
            // we don't need.
            else
            {
                geometry.Vertices.Channels.Remove(vertexChannelName);
            }
        }

        private void LookUpTextures(NodeContent node)
        {   int i;
  
            MeshContent mesh = node as MeshContent;
            if (mesh != null)
            {


                     foreach (GeometryContent geometry in mesh.Geometry)
                     {

                        // Debug.WriteLine(geometry.Material.Textures.Keys.Count);
                         for (i = 0; i < geometry.Material.Textures.Keys.Count; i++)
                         {
                             if ((geometry.Material.Textures.Keys.ElementAt(i) == "Texture") ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == "SpecularMap") ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == "NormalMap") ||
                                  (geometry.Material.Textures.Keys.ElementAt(i) == "AmbientMap") ||
                                   (geometry.Material.Textures.Keys.ElementAt(i) == "ReflectionMap") ||
                                    (geometry.Material.Textures.Keys.ElementAt(i) == "AlphaMap") ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == reflectionMapKey) ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == alphaMapKey) ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == normalMapKey) ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == ambientMapKey) ||
                                 (geometry.Material.Textures.Keys.ElementAt(i) == specularMapKey))
                             {

                             }
                             else
                             {
                                 Debug.WriteLine(geometry.Material.Textures.Keys.ElementAt(i));
                             }
                         }


                         if (mesh.Name == "LGT_RL")
                         {
                            mesh.Name = mesh.Name;
                        }


                         #region reflection_map_path
                         string reflectionMapPath;
                         if (!String.IsNullOrEmpty(reflectionMapTexture))
                         {
                             reflectionMapPath = reflectionMapTexture;
                         }
                         else
                         {
                             ExternalReference<TextureContent> s;
                             geometry.Material.Textures.TryGetValue(reflectionMapKey, out s);
                             reflectionMapPath = null;
                             if (s != null)
                             {
                                 Debug.WriteLine("reflectionmap " + s.Filename + " " + mesh.Name);
                                 reflectionMapPath = s.Filename;
                             }

                         }
                         if (reflectionMapPath == null)
                         {
                             reflectionMapPath = Path.Combine(directory, mesh.Name + "_r.tga");
                             if (!File.Exists(reflectionMapPath))
                             {
                                 reflectionMapPath = "null_reflection.tga";
                             }
                         }
                         else
                         {
                             if (!reflectionMapPath.Contains(":"))
                             {
                                 reflectionMapPath = Path.Combine(directory, reflectionMapPath);
                             }
                         }
                         #endregion

                         #region ambient_map_path
                         string ambientMapPath;
                         if (!String.IsNullOrEmpty(ambientMapTexture))
                         {
                             ambientMapPath = alphaMapTexture;
                         }
                         else
                         {
                             ExternalReference<TextureContent> s;
                             geometry.Material.Textures.TryGetValue(ambientMapKey, out s);
                             ambientMapPath = null;
                             if (s != null)
                             {
                                 Debug.WriteLine("ambientmap " + s.Filename + " " + mesh.Name);
                                 ambientMapPath = s.Filename;
                             }

                         }
                         if (ambientMapPath == null)
                         {
                             ambientMapPath = Path.Combine(directory, mesh.Name + "_amb.tga");
                             if (!File.Exists(ambientMapPath))
                             {
                                 ambientMapPath = "null_ambient.tga";
                             }
                         }
                         else
                         {
                             if (!ambientMapPath.Contains(":"))
                             {
                                 ambientMapPath = Path.Combine(directory, ambientMapPath);
                             }
                         }
                         #endregion

                         #region alpha_map_path
                         string alphaMapPath;
                    if (!String.IsNullOrEmpty(alphaMapTexture))
                    {
                        alphaMapPath = alphaMapTexture;
                    }
                    else
                    {
                        ExternalReference<TextureContent> s;
                        geometry.Material.Textures.TryGetValue(alphaMapKey, out s);
                        alphaMapPath = null;
                        if (s != null)
                        {
                            Debug.WriteLine("alphamap " + s.Filename + " " + mesh.Name);
                            alphaMapPath = s.Filename;
                        }

                    }
                   if (alphaMapPath == null)
                    {
                        alphaMapPath = Path.Combine(directory, mesh.Name + "_a.tga");
                        if (!File.Exists(alphaMapPath))
                        {
                            alphaMapPath = "null_alpha.tga";
                        }
                    }
                    else
                    {
                        if (!alphaMapPath.Contains(":"))
                        {
                            alphaMapPath = Path.Combine(directory, alphaMapPath);
                        }
                    }
#endregion

                         #region bump_map_path
                   //BUMP
                    string normalMapPath;
                    if (!String.IsNullOrEmpty(NormalMapTexture))
                    {
                        normalMapPath = NormalMapTexture;
                    }
                    else
                    {
                        ExternalReference<TextureContent> s;
                        geometry.Material.Textures.TryGetValue(NormalMapKey, out s);
                        normalMapPath = null;
                        if (s != null)
                        {
                            Debug.WriteLine("bumpmap " + s.Filename + " " + mesh.Name);
                            normalMapPath = s.Filename;
                        }

                    }
                    //if the NormalMapTexture Property was not used, and the key was not found in the model, than normalMapPath would have the value null.
                    if (normalMapPath == null)
                    {
                        normalMapPath = Path.Combine(directory, mesh.Name + "_n.tga");
                        if (!File.Exists(normalMapPath))
                        {
                            normalMapPath = "null_normal.tga";
                        }
                    }
                    else
                    {
                        if (!normalMapPath.Contains(":"))
                        {
                            normalMapPath = Path.Combine(directory, normalMapPath);
                        }
                    }
                   # endregion

                         #region specular_map_path
                    //specular
                    string specularMapPath;
                
                    if (!String.IsNullOrEmpty(SpecularMapTexture))
                    {
                        specularMapPath = SpecularMapTexture;
                    }
                    else
                    {   ExternalReference<TextureContent> s;
                        geometry.Material.Textures.TryGetValue(specularMapKey, out s);
                        specularMapPath = null;
                        if (s != null)
                        {
                            Debug.WriteLine("specularmap " + s.Filename + " " + mesh.Name);
                            specularMapPath = s.Filename;
                        }
                        else{

                            SpecularColor = geometry.Material.OpaqueData.GetValue<Microsoft.Xna.Framework.Vector3>("SpecularColor", new Vector3(0, 0, 0));
                            SpecularPower = geometry.Material.OpaqueData.GetValue<float>("SpecularPower", 0.0f);
                        }
                    }

                    if (specularMapPath == null)
                    {
                        specularMapPath = Path.Combine(directory, mesh.Name + "_s.tga");
                        if (!File.Exists(specularMapPath))
                        {
                            specularMapPath = "null_specular.tga";
                        }
                    }
                    else
                    {
                        if (!specularMapPath.Contains(":"))
                        {
                            specularMapPath = Path.Combine(directory, specularMapPath);
                        }
                    }


                   #endregion
                        




                         #region reflection_map_key

                    if (geometry.Material.Textures.ContainsKey(reflectionMapKey))
                    {
                        ExternalReference<TextureContent> texRef = geometry.Material.Textures[reflectionMapKey];
                        geometry.Material.Textures.Remove(reflectionMapKey);
                        geometry.Material.Textures.Add("ReflectionMap", texRef);
                    }
                    else
                    {
                        if (!geometry.Material.Textures.ContainsKey("ReflectionMap"))
                        {
                            Trace.Write(mesh.Geometry.Count + " " + mesh.Name + " " + reflectionMapPath + "\n");
                            geometry.Material.Textures.Add("ReflectionMap",
                                            new ExternalReference<TextureContent>(reflectionMapPath));
                        }
                        else
                        {
                        //    Trace.Write(mesh.Geometry.Count + " " + mesh.Name + "[omited] " + "\n"); // + normalMapPath
                        }
                    }
#endregion

                         #region ambient_map_key

                    if (geometry.Material.Textures.ContainsKey(ambientMapKey))
                    {
                        ExternalReference<TextureContent> texRef = geometry.Material.Textures[ambientMapKey];
                        geometry.Material.Textures.Remove(ambientMapKey);
                        geometry.Material.Textures.Add("AmbientMap", texRef);
                    }
                    else
                    {
                        if (!geometry.Material.Textures.ContainsKey("AmbientMap"))
                        {
                            Trace.Write(mesh.Geometry.Count + " " + mesh.Name + " " + ambientMapPath + "\n");
                            geometry.Material.Textures.Add("AmbientMap",
                                            new ExternalReference<TextureContent>(ambientMapPath));
                        }
                        else
                        { 
                            ExternalReference<TextureContent> s;
                            geometry.Material.Textures.TryGetValue("AmbientMap", out s);
                            string []s0;                  s0=   s.Filename.Split('\\') ;
                            if ((s0[s0.Length-1]!=ambientMapPath) && geometry.Material.Textures.ContainsKey(ambientMapKey)){
                            Trace.Write(mesh.Geometry.Count + " " + mesh.Name + "[Error] " + "\n"); // + normalMapPath
                            }
                        }
                    }
                    #endregion

                         #region alpha_map_key

                    if (geometry.Material.Textures.ContainsKey(alphaMapKey))
                    {
                        ExternalReference<TextureContent> texRef = geometry.Material.Textures[alphaMapKey];
                        geometry.Material.Textures.Remove(alphaMapKey);
                        geometry.Material.Textures.Add("AlphaMap", texRef);
                    }
                    else
                    {
                        if (!geometry.Material.Textures.ContainsKey("AlphaMap"))
                        {
                            Trace.Write(mesh.Geometry.Count + " " + mesh.Name + " " + alphaMapPath + "\n");
                            geometry.Material.Textures.Add("AlphaMap",
                                            new ExternalReference<TextureContent>(alphaMapPath));
                        }
                        else
                        {
                            ExternalReference<TextureContent> s;
                            geometry.Material.Textures.TryGetValue("AlphaMap", out s);
                            string[] s0; s0 = s.Filename.Split('\\');
                            if ((s0[s0.Length - 1] != alphaMapPath) && geometry.Material.Textures.ContainsKey(alphaMapKey))
                            {
                                Trace.Write(mesh.Geometry.Count + " " + mesh.Name + "[Error] " + "\n"); // + normalMapPath
                            }
                        }
                    }
                    #endregion

                         #region normal_map_key

                    if (geometry.Material.Textures.ContainsKey(normalMapKey))
                    {
                        ExternalReference<TextureContent> texRef = geometry.Material.Textures[normalMapKey];
                        geometry.Material.Textures.Remove(normalMapKey);
                        geometry.Material.Textures.Add("NormalMap", texRef);
                    }
                    else
                    {
                        if (!geometry.Material.Textures.ContainsKey("NormalMap"))
                        {
                            Trace.Write(mesh.Geometry.Count + " " + mesh.Name + " " + normalMapPath + "\n");
                            geometry.Material.Textures.Add("NormalMap",
                                            new ExternalReference<TextureContent>(normalMapPath));
                        }
                        else
                        {
                        //    Trace.Write(mesh.Geometry.Count + " " + mesh.Name + "[omited] " + "\n"); // + normalMapPath
                        }
                    }
                    #endregion

                         


                    if (geometry.Material.Textures.ContainsKey(specularMapKey))
                    {
                        ExternalReference<TextureContent> texRef = geometry.Material.Textures[specularMapKey];
                        geometry.Material.Textures.Remove(specularMapKey);
                        geometry.Material.Textures.Add("SpecularMap", texRef);
                    }
                    else
                    {
                        if (!geometry.Material.Textures.ContainsKey("SpecularMap"))
                        {
                            geometry.Material.Textures.Add("SpecularMap",
                                        new ExternalReference<TextureContent>(specularMapPath));
                        }
                    }



                }
            }

   
            foreach (NodeContent child in node.Children)
            {
                LookUpTextures(child);
            }
        }



        protected override MaterialContent ConvertMaterial(MaterialContent material,
                                                                                ContentProcessorContext context)
        {
            EffectMaterialContent deferredShadingMaterial = new EffectMaterialContent();
            deferredShadingMaterial.Effect = new ExternalReference<EffectContent>("RenderGBuffer.fx");

            // copy the textures in the original material to the new normal mapping
            // material, if they are relevant to our renderer. The
            // LookUpTextures function has added the normal map and specular map
            // textures to the Textures collection, so that will be copied as well.
            foreach (KeyValuePair<String, ExternalReference<TextureContent>> texture
            in material.Textures)
            {
                if ((texture.Key == "Texture") ||
                        (texture.Key == "NormalMap") ||
                        (texture.Key == "AlphaMap") ||
                        (texture.Key == "AmbientMap") ||
                        (texture.Key == "ReflectionMap") ||
                        (texture.Key == "SpecularMap"))
                    deferredShadingMaterial.Textures.Add(texture.Key, texture.Value);

            //    deferredShadingMaterial.OpaqueData.Add("SpecularColor", SpecularColor);
            }

            return context.Convert<MaterialContent, MaterialContent>(deferredShadingMaterial, typeof(MaterialProcessor).Name);
        }
    }
}