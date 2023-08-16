[参考资料](https://www.youtube.com/watch?v=W5P8GlaEOSI)  
[第一集18分钟后](https://www.bilibili.com/video/BV1si4y1U7V9/?spm_id_from=333.337.search-card.all.click&vd_source=c6ca89f75d00cd4da634736edfcca1ae)

1. 直线的概念
  图形学中的直线是一个线段，是有端点和宽度的

2. 直线的方程

   两点式：
   $$
   \frac{y-y_1}{x-x_1}=\frac{y_1-y_2}{x_1-x_2}
   $$
   

​	点斜式：
$$
y = {m}x + c
$$

 3. DDA:

    主步进方向选x或者y都可以，但是效果不一样

    如果dx > dy 说明在x方向上变化剧烈，沿着x方向走，以单位1为例，x 走1 y走不足1，是紧凑的，这时候如果以y为主方向，y走1，x走大于1，是不紧凑的

    

    如果dx < dy 说明在y方向上变化剧烈，沿着y方向走，同上