#include "stdio.h"
int f(int x,int y)
{ int t;
  if(x<y)
  {
      t=x;
      x=y;
      y=t;
  }
    if(x%y==0)
        return y;
    else
        return f(y,x%y);
  }
void main()
{
    int x,y;
    printf("请输入两个整数:");
    scanf("%d%d",&x,&y);
    printf("两个整数的最大公约数为%d\n",f(x,y));
}

