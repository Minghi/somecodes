#include<stdio.h>

void main()
{
	int t[10];
	int i,x=0;
    
	printf("请输入10个整数到数组中：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&t[i]);
	}
	printf("请输入需要查找的数x=");
	scanf("%d",&x);
    
	for(i=0;i<10;i++)
	{
		if(x==t[i])
			break;
	}
	if(i<10)
		printf("找到了，其下标=%d\n",i);
	else
		printf("没有找到，-1\n");
}

