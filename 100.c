#include<stdio.h>
void main()
{
    int a,b,c=1;
    scanf("%d",&a);
    while(a!=0)
    {
     b=a%10;
     c=c*b;
     a=a/10;
    }
   printf("ans = %d",c);
}
