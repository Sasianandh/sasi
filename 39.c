
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,j,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
j=a[0];
for(i=0;i<n;i++)
{
if(a[i]>j)
{
    j=a[i];
}
}
printf("max is=%d",j);
}
