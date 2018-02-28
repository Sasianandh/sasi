#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    
   int n,a,b,i,c=0;
   printf("enter num");
   scanf("%d",&n);
   printf("enter range");
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       if(i==n)
       {
       c++;
       break;
   }
   }
   if(c>0)
   printf("yes");
   else
   printf("no");
}
