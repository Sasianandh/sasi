#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
int i=0,j=1,n,sum=0;
scanf("%d",&n);
printf("%d\n%d\n",i,j);
n=n-2;
for(i=1;i<=n;i++)
{
sum=i+j;
printf("%d\n",sum);
i=j;
j=sum;
}
return 0;
}
