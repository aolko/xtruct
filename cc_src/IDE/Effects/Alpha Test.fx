// Additive
// David Clark
// PS 0.0
// Simple additive blend.

// ConstructEffect
technique ConstructEffect
{
    pass p0
    {
        VertexShader = null;
		PixelShader = null;
		AlphaTestEnable = TRUE;
                AlphaRef = 128;
		AlphaFunc = GreaterEqual;   
    }
}
