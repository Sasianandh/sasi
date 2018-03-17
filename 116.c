#include<stdio.h>
void main()
{
 int a,b,c=1,d,e;
 printf("enter 2 numbers");
 scanf("%d%d",&a,&b);
 e=b;
 while(b!=0)
 {
         b=b/10;
         c=c*10;
 }
 d=(a*c)+e;
 printf("%d",d);
}
