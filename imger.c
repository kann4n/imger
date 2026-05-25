#include <stdio.h>
#include <math.h>   // may need

int main()
{
	int width = 256;
	int height = 256;
	int max = 255;
	FILE *out = fopen("generated-image.ppm", "wb");    // write in binary mode
	fprintf(out, "P6 %d %d %d\n", width,  height, max);
	for (int i=0; i<height; i++)
	{
		for (int j=0; j<width; j++)
		{
		    // change these rgb values in some way to make image.
            int r = i%255;
            int g = 0;
            int b = j%255;
			putc(r, out);
			putc(g, out);
			putc(b, out);
		}
	}
	fclose(out);    // imp
}
