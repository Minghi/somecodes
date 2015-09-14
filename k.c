/* //编写一个函数double  fun(double  n)，实现对参数n的值运用四舍五入的方法保留2位小数，编写程序调用该函数，使得用户输入double 型的数据，都是保留2位小数后输出。

#include "stdio.h"
double  fun(double  x)
{
    return    ((int)(x*100+0.5)/100.0);
}


void main()
{
    double x;
    scanf("%lf",&x);
    printf("%.2f\n",fun(x));
    
}*/

//编写一个函数：int  prime(int  n)，该函数的功能是判断n是否是素数，如果是素数，则返回1，否则返回0，编写程序调用该函数，输出100以内的所有素数。

#include <stdio.h>
int prime(int n)
{
    int i;
    if (n<2) return 0;
    for(i=2;i<n;i++)
        if(n%i==0)return 0;
    return 1;
}
void main()
{
    int i;
    for(i=2;i<=100;i++)
        if(prime(i))
            printf("%d\n ",i);
}