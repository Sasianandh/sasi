#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   
   int n,i;
   printf("enter num");
   scanf("%d",&n);
   printf("factors are\n");
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       printf("%d\t",i);
   }
}
