#include "stdio.h"
void f(int n)
{ if(n<=10)
{ printf("%d\n",n);
    f(n+1);
    
}
}
 void main()
    { int n;
        printf("请输入一个整数:");
        scanf("%d",&n);
        f(n);
    }
