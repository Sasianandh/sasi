#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
int i=0,j=1,n,sum=0,k;
scanf("%d",&n);
printf("fibonacci series are");
printf("%d\n%d\n",i,j);
n=n-2;
for(k=1;k<=n;k++)
{
sum=i+j;
printf("%d\n",sum);
i=j;
j=sum;
}
return 0;
}
