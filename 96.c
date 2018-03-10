#include<stdio.h>
void main()
{
    int n,k=0,i;
    scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0){
       k=1; break;}
   }
   if(k==1)
   printf("yes");
   else
   printf("no");
}
