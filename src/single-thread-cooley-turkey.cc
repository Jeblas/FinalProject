#include "complex.h"
#include "input_image.h"

#include <iostream>

const float PI = 3.14159265358979f;

void fft(Complex *in, int size, int step) {
    if (size <= 1) {
        return;
    }

    //divide

    //recursive call

    //combine



}

int main(int argc, char **argv) {
    Complex *in_img;
    Complex *out_img;
    int img_width;
    int img_height;

    InputImage image_handler(argv[2]);

    in_img = image_handler.get_image_data();
    img_width = image_handler.get_width();
    img_height = image_handler.get_height();

    // Data element read in.


    image_handler.save_image_data(argv[3], out_img, img_width, img_height);
    return 0;
}
