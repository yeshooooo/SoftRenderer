```cpp
#include "tgaimage.h"
// 构件TGAColor类型的颜色
const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);
int main(int argc, char** argv) {
    // 创建一个100 x 100 大小的图片
        TGAImage image(100, 100, TGAImage::RGB);
        // 将图片的x = 52 ,y = 41 的像素点设置为红色
        image.set(52, 41, red);
        // 把图片的左下角设置为原点
        image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
        // 输出图片到文件
        image.write_tga_file("output.tga");
        return 0;
}
```