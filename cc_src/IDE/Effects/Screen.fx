// Screen
// Ashley Gullen
// PS 2.0
// Screen blend.

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

// OriginalTexture sampler
sampler2D background = sampler_state {
    Texture = (BackgroundTexture);
    MinFilter = Point;
    MagFilter = Point;
    MipFilter = Point;
};


// Effect function
float4 EffectProcess( float2 Tex : TEXCOORD0 ) : COLOR0
{
    // Screen formula
    float4 front = tex2D(foreground, Tex.xy);
	 if(front.a != 0)
	 {
		 float4 back = tex2D(background, Tex.xy);
		 front.rgb = 1.0 - ((1.0 - front.rgb) * (1.0 - back.rgb * front.a));
	 }
    return front;
}

// ConstructEffect
technique ConstructEffect
{
    pass p0
    {
        VertexShader = null;
        PixelShader = compile ps_2_0 EffectProcess();
    }
}
