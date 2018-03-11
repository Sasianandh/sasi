#include<stdio.h>
void main()
{
    int c,b,n,i,a[100];
    scanf("%d",&c);
     scanf("%d",&b);
    for(i=c;i<=b;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=c;i<=b;i++)
    {
        if(a[i]!=i)
        printf("%d",a[i-1]+1);
    }
}
