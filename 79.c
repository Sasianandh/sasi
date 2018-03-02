#include<stdio.h>
int main()
{
    int n,b,a,i,t=0;
    printf("enter the num\n");
     scanf("%d",&a);
     scanf("%d",&b);
     n=a*b;
for(i=1;i<n;i++)
{
    a=i*i;
    if(a==n)
    {
   t++;
    break;
    }
    a=0;
}
if(t==1)
 printf("yes");
 else
  printf("no");
}
