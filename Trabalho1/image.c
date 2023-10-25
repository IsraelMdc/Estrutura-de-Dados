#include "image.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct 
{    
    unsigned char type;
    int rows;
    int cols;
} Image;

// Loads an image from a PPM file.
Image* create(int rows, int cols, char type[])
{
    Image *image_rgb = ((Image*)malloc(sizeof(Image)));


    return image_rgb;

}
    
Image* load_from_ppm(const char* filename);
/**
* Writes an image to a PPM file.
*
* @param image The image to write to the file.
* @param filename The name of the PPM file to write.
*/
void write_to_ppm(Image* image, const char* filename);
/**
* Converts an RGB image to grayscale.
*
* @param image_rgb The input RGB image to convert.
* @param image_gray The output grayscale image where the result is
stored.
*/
void rgb_to_gray(Image* image_rgb, Image* image_gray);