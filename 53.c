#include <stdio.h>
int main()
{
    int n,b,s;
    scanf("%d",&n);
    while(n!=0)
    {
    b=n%10;
    s=s+b;
    n=n/10;
    }
    printf("%d",s);
    }
