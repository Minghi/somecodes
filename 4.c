//P182[4-6](9)编写一个函数输出如下图案。用参数n控制输出的行数，参数直的取值范围为1~9，超过范围，函数不做任何输出，返回整数0；否则，输出图案后返回整数1.编写主函数调用该函数。
#include <stdio.h>
int a(int n)
{
	int i,j;
	if (n<1||n>9) return 0;
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
                printf(" ");
			for (j=1;j<=(2*i-1);j++)
                printf("%d",i);
			printf("\n");
		}
		return 1;
	}
}

void main()
{
	int n;
	scanf("%d",&n);
	
	a(n);
}

