#include<stdio.h>
#include<string.h>
void main()
{
        int a,b,i,n,m;
        
scanf("%d%d",&a,&b);
n=a*b;
for(i=2;i<=a&&i<=b;i++)
{
       if(a%i==0&&b%i==0)
       {
         m=i; break;
       }
}
printf("lcm\t=%d",m);
}
