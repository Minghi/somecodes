#include "stdio.h"
#define size 10
void fun(int t[])
{ int i,j,a;
    printf("请输入10个整数:");
    for(i=0;i<size;i++)
        scanf("%d",&t[i]);
    for(i=0;i<size-1;i++)
        for(j=0;j<size-1;j++)
            if(t[j]>t[j+1])
            {
                a=t[j];
                t[j]=t[j+1];
                t[j+1]=a;
            }
    for(i=0;i<size;i++)
        printf("%d ",t[i]);
    printf("\n");
    
}

void main()
{
    int t[size],i,j,a;
    fun(t);
}

