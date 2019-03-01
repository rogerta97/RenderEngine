uniform sampler2D qt_Texture0;
varying highp vec4 qt_TexCoord0;

in Data
{
    vec3 color;
} FSIn;

out vec4 outColor;

void main(void)
{
    gl_FragColor = texture2D(qt_Texture0, qt_TexCoord0.st);
    outColor = vec4(FSIn.color, 1.0f);
}
