//P182[4-6](2)定义两个函数分别求两个整数的最大公约数和最小公倍数，并在主函数中输入两个整数以后调用该函数。编写主函数调用该函数。//
#include <stdio.h>
int gcd(int a,int b)
{
    int r;
    r=a%b;
    while (r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int lcm(int a,int b)
{
    return ((a*b)/gcd(a,b));
}
void main()
{
    int a,b,c,d;
    printf("请输入两个整数:");
    scanf("%d%d",&a,&b);
    c=gcd(a,b);
    d=lcm(a,b);
    printf("最大公约数是%d,最小公倍数是%d\n",c,d);
}