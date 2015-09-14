#include <stdio.h>

int main(void)
{
    int a,b,c,t;
    a=-1;
    b=1;
    c=1;
    t=++a || ++b && ++c;
    if(++a || ++b && ++c)
        printf("%d,%d,%d,%d\n",a,b,c,t);
}
