#include<stdio.h>
int main()
{
    int n,b,a[10],k,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
       b=n%10;
       a[i]=b;
       i++; 
       n=n/10;
    }
    for(k=i-1;k>=0;k--)
    {
        printf("%d\t",a[k]);
    }
}
