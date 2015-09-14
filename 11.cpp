

#include"stdio.h"

void nopass(int size,int t[])
{   int i,n=0;                         
    for(i=0;i<3;i++)
	{
		if(t[i]<60)
		{ n++;
		printf("%2d",i);
		}

	}
	 printf("\n");  
	 printf("不及格人数为%3d:",n);
	 printf("\n");  

}
void upaverage(int size,int score[])
{
  int sum=0,i,average=0,m=0;
  for(i=0;i<3;i++)
     sum+=score[i];
  average=sum/3;
  for(i=0;i<3;i++)
  {
	  if(score[i]> average)
	{	
	  m++;
	  printf("%2d",i);
	}
  
  
  }
  printf("\n");

  printf("超过平均分的人数为%3d：",m);
  printf("\n");
}
void level(int size,int score[])
{int a=0,b=0,c=0,d=0,i;
float A=0,B=0,C=0,D=0;
for(i=0;i<3;i++)
{
	if(score[i]<60)
	
		a++;
	
	else if(score[i]<70)
		b++;
	else if(score[i]<80)
		c++;
	else if(score[i]<90)
		d++;

}
A=100*(a/3.0);
B=100*(b/3.0);
C=100*(c/3.0);
D=100*(d/3.0);

printf("刚及格的人数（60~70）的比例为:%4.2f%%",A);
printf("\n");
printf("中等的人数（70~80）的比例为:%4.2f%%",B);
printf("\n");
printf("良好的的人数（80~90）的比例为:%4.2f%%",C);
printf("\n");
printf("优秀的人数（90~100）的比例为:%4.2f%%",D);
printf("\n");
}
int main(void)
{
	int n;                                     
	int score[3];
	printf("请输入该班所有同学的分数：");
	for(n=0;n<3;n++)
	scanf("%d",&score[n]);
	printf("不及格同学的下标为：");
	nopass(3,score);
	printf("超过平均分同学的下标为：");
	upaverage(3,score);
	level(3,score);
}
/*#include"stdio.h"

void main()
{
  int i,m=0; 
int score[3];                                    

printf("请输入该班所有同学的分数：");
for(i=0;i<3;i++)
  scanf("%d",&score[i]);
	printf("不及格同学的下标为:",i);
for(i=0;i<3;i++)
	{
		if(score[i]<60)
		{ m++;
		printf("%2d",i);
		}
		
		 
	}

printf("\n");  
       printf("不及格同学的人数为%d",m);
printf("\n"); 
}*/