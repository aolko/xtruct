// Subtractive
// Ashley Gullen
// PS 1.4
// Subtractive blend.

// Foreground texture
texture ForegroundTexture;

// Background texture
texture BackgroundTexture;

// Foreground sampler
sampler2D foreground = sampler_state {
    Texture = (ForegroundTexture);
    MinFilter = Point;
    MagFilter = Point;
    MipFilter = Point;
};

// Foreground sampler
sampler2D background = sampler_state {
    Texture = (BackgroundTexture);
    MinFilter = Point;
    MagFilter = Point;
    MipFilter = Point;
};

// Effect function
float4 EffectProcess( float2 Tex : TEXCOORD0 ) : COLOR0
{
   // Subtract the front and back pixels
   float4 front = tex2D(foreground, Tex.xy);
   float4 back = tex2D(background, Tex.xy);
   back.rgb = back.rgb - front.rgb;	// Subtract colours
   return back;
}

// ConstructEffect
technique ConstructEffect
{
    pass p0
    {
        VertexShader = null;
        PixelShader = compile ps_1_4 EffectProcess();
    }
}
