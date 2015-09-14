//把10进制转化成2到9进制形式输出
#include <stdio.h>
int _trans(int,int);
int main(int argc, const char * argv[])
{
    
    // insert code here...
    int num,k;
    scanf("%d %d",&num,&k);
    _trans(num,k);
    return 0;
}
int _trans(int x,int y)
{
    int i=0,j,n[100];
    while(x!=0)
    {
        n[i]=x%y;
        x=x/y;
        i++;
    }
    j=i-1;
    for (i=j;i>=0;i--)
    {
        printf("%d",n[i]);
    }
    return 0;
}