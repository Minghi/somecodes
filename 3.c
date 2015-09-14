//P182[4-6](7)编写一个不带返回值的函数求球的表面积和球的体积，在主函数中调用该函数输出球的表面积和球的体积。
#include "stdio.h"
#define PI 3.1415926
void print(double s,double v)
{
    printf("该球的表面积为%lf,该球的体积为%lf\n",s,v);
}
void main()
{
    double R,s,v;
    printf("请输入球的半径:");
    scanf("%lf",&R);
    s=4*PI*R*R;
    v=4*PI*R*R*R/3;
    print(s,v);
}