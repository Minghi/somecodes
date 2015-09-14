
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float sj[100],cc[100],xd[100],jd[100];
    double pj_xd=0,pj_jd=0;
    int i,j,n=0;
    printf("\t请依次输入每个西瓜的实际重量和猜测重量(以-1结束)\n");
    while (1)
    {
        printf("\n\t请输入第%d个西瓜的实际重量和猜测重量:",n+1);
        scanf("%f",&sj[n]);
        if (sj[n]==-1) break;
        scanf("%f",&cc[n]);
        if (cc[n]==-1) break;
        n++;
    }
    for(i=0;i<n;i++)
    {
        xd[i] = fabs(cc[i]-sj[i]);
        jd[i] = xd[i]*100/ sj[i] ;
        pj_xd+=xd[i];
        pj_jd+=jd[i];
    }
    printf("\n\t\t\t相对误差 \t绝对误差\n\n");
    for (i=0;i<n;i++)
        printf("\t第%d个西瓜：\t%f \t%.5f%c\n",i+1,xd[i],jd[i],'%');
    printf("\n\t平均误差：\t%lf \t%.5lf%c\n\n",pj_xd/n,pj_jd/n,'%'); 
    system("pause"); 
}
