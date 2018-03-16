#include<stdio.h>
void main()
{
    int n,b,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
            b=n%10;
            n=n/10;
            c++;
    }
printf("%d",c);
}
