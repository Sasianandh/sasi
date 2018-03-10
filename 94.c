#include<stdio.h>
void main()
{
    int n,k;
    int a[100],i,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==k-1)
        printf("%d",a[i]);
    }
}
