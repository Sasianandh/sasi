#include<stdio.h>
void main() 
{
int n,d,s;
   PRINTF("ENTER IN MINUTES");
   scanf("&d",n);
   if(n<60)
   {
   s=0;
   d=n;
   else
   {
   s=n/60;
   d=n%60;
   }
   printf("the result is=%d.%d mins",s,d);
   }
   
   
   
   
