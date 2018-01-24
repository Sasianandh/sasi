#include<stdio.h>
void main() 
{
int a,b,c,d,n,s,f,m,n;
   PRINTF("ENTER hour and mins");
   scanf("%d %d",&a,&b);
   scanf("%d %d,&c,&d);
   n=(a*60)+b;
   s=(c*60)+d;
   f=n-s;
    if(f<60)
   {
   m=0;
   n=f;
   }
   else
   {
   m=f/60;
   n=f%60;
   }
   printf("the result is=%d.%d mins",m,n);
   }
  
