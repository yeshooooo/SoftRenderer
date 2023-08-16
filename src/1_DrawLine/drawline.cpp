//
// Created by yeshooo on 2023/8/16.
//
#include "tgaimage.h"
void line(int x0, int y0, int x1, int y1, TGAImage &image, TGAColor color) {
    for (float t=0.; t<1.; t+=.01) {
        int x = x0 + (x1-x0)*t;
        int y = y0 + (y1-y0)*t;
        image.set(x, y, color);
    }
}
int main(){

}