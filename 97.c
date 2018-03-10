#include<stdio.h>
void main()
{
    int n,k,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
      k=n%10;
      printf("%d",k);
      n=n/10;
    }}
