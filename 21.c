#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,n;
 printf("enter the starting number\n");
 scanf("%d",&a);
 printf("enter the common difference");
  scanf("%d",&b);
  printf("enter the Nth term");
    scanf("%d",&n);
    c=a+(n-1)*b;
    printf("a%d = %d",n,c);
    return 0;
  }
