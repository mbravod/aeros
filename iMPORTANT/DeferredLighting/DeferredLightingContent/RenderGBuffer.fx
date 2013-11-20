float4x4 World;
float4x4 View;
float4x4 Projection;
float3 specularColor;
float3 CameraPosition;
float4x4 WorldInverseTranspose;

float bumplevel=.99f;

float4 AmbientColor = float4(1, 1, 1, 1);
float AmbientIntensity = .8;
 
float3 DiffuseLightDirection = float3(0,0, 0);
float4 DiffuseColor = float4(1, 1, 1, 1);
float DiffuseIntensity = 0.9;
 
float Shininess = 200;
float4 SpecularColor = float4(0, 0, 0, 1);
float SpecularIntensity = .01;
float3 ViewVector = float3(1, 0, 0);
 
float Transparency = 0.5;
 bool alphaenabled=false;








texture Texture;
sampler diffuseSampler = sampler_state
{
    Texture = (Texture);
  //  MAGFILTER = LINEAR;
  //  MINFILTER = LINEAR;
  //  MIPFILTER = LINEAR;

	 MipFilter = linear;
    MagFilter = linear ;
    MinFilter = Anisotropic ;
    AddressU = Wrap;
    AddressV = Wrap;
};

texture SpecularMap;
sampler specularSampler = sampler_state
{
    Texture = (SpecularMap);
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    Mipfilter = LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};

texture NormalMap;
sampler normalSampler = sampler_state
{
    Texture = (NormalMap);
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    Mipfilter = LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};


texture AlphaMap;
sampler alphaSampler = sampler_state
{
    Texture = (AlphaMap);
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    Mipfilter = LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};


texture AmbientMap;
sampler ambientSampler = sampler_state
{
    Texture = (AmbientMap);
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    Mipfilter = LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};








struct VertexShaderInput
{
    float4 Position : POSITION0;
    float3 Normal : NORMAL0;
    float3 Tangent : TANGENT0;
    float3 Binormal : BINORMAL0;
    float2 TextureCoordinate : TEXCOORD0;
};
 
struct VertexShaderOutput
{
   float4 Position : POSITION0;
    float2 TextureCoordinate : TEXCOORD0;
    float3 Normal : TEXCOORD1;
    float3 Tangent : TEXCOORD2;
    float3 Binormal : TEXCOORD3;

};
 


 VertexShaderOutput VertexShaderFunction(VertexShaderInput input)
{


     VertexShaderOutput output;

    float4 worldPosition = mul(input.Position, World);
    float4 viewPosition = mul(worldPosition, View);
    output.Position = mul(viewPosition, Projection);

    output.Normal = normalize(mul(input.Normal, WorldInverseTranspose));
    output.Tangent = normalize(mul(input.Tangent, WorldInverseTranspose));
    output.Binormal = normalize(mul(input.Binormal, WorldInverseTranspose));

    output.TextureCoordinate = input.TextureCoordinate;
    return output;

}
bool alphaCROP=false;

float4 PixelShaderFunction(VertexShaderOutput input) : COLOR0
{


	// Calculate the normal, including the information in the bump map
    float3 bump = bumplevel * (tex2D(normalSampler, input.TextureCoordinate) - (0.5, 0.5, 0.5));
    float3 bumpNormal = input.Normal + (bump.x * input.Tangent + bump.y * input.Binormal);
    bumpNormal = normalize(bumpNormal);

    // Calculate the diffuse light component with the bump map normal
    float diffuseIntensity = dot(normalize(DiffuseLightDirection), bumpNormal);
    if(diffuseIntensity < 0)
        diffuseIntensity = 0;

    // Calculate the specular light component with the bump map normal
    float3 light = normalize(DiffuseLightDirection);
    float3 r = normalize(2 * dot(light, bumpNormal) * bumpNormal - light);
    float3 v = normalize(mul(normalize(ViewVector), World));
    float dotProduct = dot(r, v);
// 


    float tSpecularIntensity = tex2D(specularSampler, input.TextureCoordinate).g;
float4 spec=float4(1, 1, 1, 1)*tex2D(specularSampler, input.TextureCoordinate).r*.15f;
	

    float4 specular = (SpecularColor+spec)+ (SpecularIntensity+tSpecularIntensity) * max(pow(dotProduct, Shininess), 0.0) * diffuseIntensity;
	specular.a=1;
    // Calculate the texture color
    float4 textureColor = tex2D(diffuseSampler, input.TextureCoordinate);
    textureColor.a = 1;

    // Combine all of these values into one (including the ambient light)
	//diffuseIntensity=0.0f;
	float4 color= saturate(textureColor * (diffuseIntensity + AmbientColor * AmbientIntensity*1.0f) + specular);
	if (alphaCROP==true){
		float4  alphaFromMap=tex2D(alphaSampler, input.TextureCoordinate); 
	clip(alphaFromMap <= .5 ? -1:1 );
	}

	if (alphaenabled==1){
	float4  alphaFromMap=tex2D(alphaSampler, input.TextureCoordinate); 
	clip(alphaFromMap <= .9? -1:1 );
	}
	else
	{
	color.a=1;
	}
    return color;
}
 


 float4 PixelShaderFunction2(VertexShaderOutput input) : COLOR0
{
  

	// Calculate the normal, including the information in the bump map
    float3 bump = bumplevel * (tex2D(normalSampler, input.TextureCoordinate) - (0.5, 0.5, 0.5));
    float3 bumpNormal = input.Normal + (bump.x * input.Tangent + bump.y * input.Binormal);
    bumpNormal = normalize(bumpNormal);

    // Calculate the diffuse light component with the bump map normal
    float diffuseIntensity = dot(normalize(DiffuseLightDirection), bumpNormal);
    if(diffuseIntensity < 0)
        diffuseIntensity = 0;

    // Calculate the specular light component with the bump map normal
    float3 light = normalize(DiffuseLightDirection);
    float3 r = normalize(2 * dot(light, bumpNormal) * bumpNormal - light);
    float3 v = normalize(mul(normalize(ViewVector), World));
    float dotProduct = dot(r, v);
// 


    float tSpecularIntensity = tex2D(specularSampler, input.TextureCoordinate).g;
	float4 spec=float4(1, 1, 1, 1)*tex2D(specularSampler, input.TextureCoordinate).r*.15f;
    float4 specular = SpecularColor+ spec+(SpecularIntensity+tSpecularIntensity) * max(pow(dotProduct, Shininess), 0.0) * diffuseIntensity;
		specular.a=1;
    // Calculate the texture color
    float4 textureColor = tex2D(diffuseSampler, input.TextureCoordinate);
    textureColor.a = 1;

    // Combine all of these values into one (including the ambient light)

	float4 color= saturate(textureColor * (diffuseIntensity) + AmbientColor * AmbientIntensity*.1 + specular);

		if (alphaCROP==true){
		float4  alphaFromMap=tex2D(alphaSampler, input.TextureCoordinate); 
	clip(alphaFromMap <= 1.0 ? -1:1 );
	color.a=0;
	 return color;
	}


	
if (alphaenabled==1){
color.b+=.03;
	color.g+=.05;
	color.a =tex2D(alphaSampler, input.TextureCoordinate); //  Transparency;
	clip(color.a > .8 ? -1:1 );
	}
	else
	{
  clip(-1);
	}
    return color;
}




technique Textured
{
    pass Pass1
    {
        VertexShader = compile vs_2_0 VertexShaderFunction();
        PixelShader = compile ps_2_0 PixelShaderFunction();
    }

}
technique Alpha
{
	pass pass2
	{
	       AlphaBlendEnable = TRUE;
       DestBlend = INVSRCALPHA;
        SrcBlend = SRCALPHA;
        VertexShader = compile vs_2_0 VertexShaderFunction();
        PixelShader = compile ps_2_0 PixelShaderFunction2();
	}
	}











	texture SkyboxTexture; 
samplerCUBE SkyboxSampler = sampler_state 
{ 
   texture = <SkyboxTexture>; 
   magfilter = LINEAR; 
   minfilter = LINEAR; 
   mipfilter = LINEAR; 
   AddressU = Mirror; 
   AddressV = Mirror; 
};





	texture ReflectionMap;
samplerCUBE reflectionSampler = sampler_state
{
    Texture = (NormalMap);
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    Mipfilter = LINEAR;
    AddressU = Mirror;
    AddressV = Mirror;
};
float4 TintColor = float4(1, 1, 1, 1);


 
struct VertexShaderOutput2
{
    float4 Position : POSITION0;
    float3 Reflection : TEXCOORD1;  
	float2 TextureCoordinate : TEXCOORD0;
};

	VertexShaderOutput2 VertexShaderFunction3(VertexShaderInput input)
{
    VertexShaderOutput2 output;

 float4 worldPosition = mul(input.Position, World);
    float4 viewPosition = mul(worldPosition, View);
    output.Position = mul(viewPosition, Projection);
    float4 VertexPosition = mul(input.Position, World);
    float3 ViewDirection = CameraPosition - VertexPosition;
    float3 Normal = normalize(mul(input.Normal, WorldInverseTranspose));
    output.Reflection = reflect(-normalize(ViewDirection), normalize(Normal));
	output.TextureCoordinate = input.TextureCoordinate;
 
    return output;
}
 
float4 PixelShaderFunction3(VertexShaderOutput2 input,  VertexShaderOutput input_) : COLOR0
{




    float3 bump = bumplevel * (tex2D(normalSampler, input.TextureCoordinate) - (0.5, 0.5, 0.5));
    float bumpNormal = (bump.x*bump.x+bump.y*bump.y+bump.z*bump.z)*bumplevel;


	float4 color;

	
    float specular = tex2D(specularSampler, input.TextureCoordinate).g;
	float4 rf0=texCUBE(SkyboxSampler, normalize(input.Reflection));
	float4 rf=(rf0.g+rf0.r+rf0.b)/3;  //toque monocromatico 
	rf.a=1;
	color= TintColor*.1+(.5*rf+.5*rf0+(SpecularIntensity+specular)*rf0*.5)*(.7  + specular*.2)  ;  //   saturate(textureColor * (diffuseIntensity) + AmbientColor * AmbientIntensity*.1 + specular);


		if (alphaCROP==true){
		float4  alphaFromMap=tex2D(alphaSampler, input.TextureCoordinate); 
	clip(alphaFromMap <= 1.0 ? -1:1 );
	color.a=0;
	 return color;
	}


	if (alphaenabled==1)
	{
		color.a=tex2D(alphaSampler, input.TextureCoordinate);
		if (color.a<.9){
			if (color.a<.05){
			color.a=.0f;
			}
			else{
			color.a*=.95f;
			}
		}
		else{
			if (bumpNormal>0.1f ){
			color.a=0; return color; }
			color.a=.18f;
		}
	}
	else
	{

		if (bumpNormal>.05f && bumplevel>1 ){
		color.a=0; return color; }
		color.a=.18f+(SpecularIntensity+specular)*.3f;
	}
   return color;
}
 
technique Reflection
{
    pass Pass1
    {
	 AlphaBlendEnable = TRUE;
       DestBlend = INVSRCALPHA;
        SrcBlend = SRCALPHA;
        VertexShader = compile vs_2_0 VertexShaderFunction3();
        PixelShader = compile ps_2_0 PixelShaderFunction3();
    }
}