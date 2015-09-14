#include "stdio.h"
#define SIZE 10
void main ()
{   int t;
    int data[SIZE];
    int min_allo;
    printf("请输入%d个整型数:",SIZE);
    for(t=0;t<SIZE;t++)
    { scanf("%d",&data[t]);
    }
      min_allo=0;
        for(t=1;t<SIZE;t++)
    { if(data[t]<data[min_allo])
        min_allo=t;
    }
    printf("最小数是%5d,位置是%5d\n",data[min_allo],min_allo);
}