

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
	 printf("����������Ϊ%3d:",n);
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

  printf("����ƽ���ֵ�����Ϊ%3d��",m);
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

printf("�ռ����������60~70���ı���Ϊ:%4.2f%%",A);
printf("\n");
printf("�еȵ�������70~80���ı���Ϊ:%4.2f%%",B);
printf("\n");
printf("���õĵ�������80~90���ı���Ϊ:%4.2f%%",C);
printf("\n");
printf("�����������90~100���ı���Ϊ:%4.2f%%",D);
printf("\n");
}
int main(void)
{
	int n;                                     
	int score[3];
	printf("������ð�����ͬѧ�ķ�����");
	for(n=0;n<3;n++)
	scanf("%d",&score[n]);
	printf("������ͬѧ���±�Ϊ��");
	nopass(3,score);
	printf("����ƽ����ͬѧ���±�Ϊ��");
	upaverage(3,score);
	level(3,score);
}
/*#include"stdio.h"

void main()
{
  int i,m=0; 
int score[3];                                    

printf("������ð�����ͬѧ�ķ�����");
for(i=0;i<3;i++)
  scanf("%d",&score[i]);
	printf("������ͬѧ���±�Ϊ:",i);
for(i=0;i<3;i++)
	{
		if(score[i]<60)
		{ m++;
		printf("%2d",i);
		}
		
		 
	}

printf("\n");  
       printf("������ͬѧ������Ϊ%d",m);
printf("\n"); 
}*/