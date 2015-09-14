#include "stdio.h"
#define size 10
void fun(int t[])
{ int i,j,a;
    printf("请输入10个整数");
    for(i=0;i<size;i++)
        scanf("%d",&t[i]);
    for(i=0;i<size-1;i++)
        for(j=1;j<9-i;j++)
            if(t[j+1]<t[j])
            {
                a=t[j+1];
                t[j+1]=t[j];
                t[j]=a;
            }
    for(i=1;i<size;i++)
        printf("%d ",t[i]);
    printf("\n");
    
}

void main()
{
    int t[size],i,j,a;
    fun(t);
}

