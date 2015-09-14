#include "stdio.h"
void main()
{
    int bjg[30],i=0,j,k,n=0,student[30],bujige=0,z6070=0,z7080=0,z8090=0,z90100=0;
    float pjf,zcj=0;
    for(i=0,k=0;i<30;i++)
    {
        printf("请输入第%d个学生的成绩:",i+1);
        scanf("%d",&student[i]);
        if(student[i]==-1)
            break;
        else if(student[i]<60&&student[i]>=0)
        {
            bujige++;
            bjg[k]=i+1;
            k++;
        }
        else if(student[i]<70&&student[i]>=60)
            z6070++;
        else if(student[i]<80&&student[i]>=70)
            z7080++;
        else if(student[i]<90&&student[i]>=80)
            z8090++;
        else if(student[i]<=100&&student[i]>=90)
            z90100++;
        n++;
    }
    for(j=0;j<n;j++)
        zcj=zcj+student[j];
    pjf=zcj/n;
    int gp[30],c;
    for(i=0,c=0;i<n;i++)
    {
        if(student[i]>=pjf)
        {
            gp[c]=i+1;
            c++;
        }
    }
    printf("平均分为%.2f\n超过平均分有%d人\n不及格有%d人,占%d/%d\n60-70占%d/%d\n70-80占%d/%d\n80-90占%d/%d\n90-100占%d/%d\n不及格学生编号为:",pjf,c,bujige,bujige,n,z6070,n,z7080,n,z8090,n,z90100,n);
    for(i=0;i<k;i++)
        printf("%d ",bjg[i]);
    printf("\n超过平均分学生编号为:");
    for(i=0;i<c;i++)
        printf("%d ",gp[i]);
    printf("\n");
    
}
