#include<stdio.h>
#include<string.h>
void main()
{
int n,i=0,j=0,b,c=1,a,s,sum=0;
scanf("%d",&s);
while(s!=0)
{
    b=s%10;
    s=s/10;
    if(b==1)
    {
        if(i==0)
        sum=1;
        else
        {
        for(j=0;j<i;j++)
        {
            c=c*2;
            
        }

        sum=sum+c;
        c=1;
        }
    }
    i++;
}
printf("%d",sum);
}
