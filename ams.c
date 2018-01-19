#include<stdio.h>
void main()
{
int i,n,s,a,b,sum=0;
//scanf("%d %d",&a,&b);
for(i=100;i<500;i++)
{
s=i;
while(s!=0)
{
s=s%10;
b=n*n*n;
sum=sum+b;
s=s/10;
}
if(sum==i)
printf("%d",i);
}
}




