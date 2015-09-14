#include "stdio.h"
#define size 5
int replace(char a,char b,char t[size])
{
    int i,n=0;
    printf("请输入一串字符");
    gets(t);
    printf("请输入两个字符");
    scanf("%c%c",&a,&b);
    for(i=0;i<size;i++)
    {
        if(a==t[i])
        {t[i]='b';
            n++;
        }
    }
    printf("%s\n",t);
	return(n);
}
void main()
{ int n;
    char a,b,t[size];
    replace(a,b,t);
    
    
    
    
    
}
