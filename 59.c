#include<stdio.h>
int main()
{
    int n,a[100],i,j,t; printf("enter how many numbers");
     scanf("%d",&n);
     printf("enter that numbers");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
   for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    printf("max num = %d",a[n]);
}
