#include<stdio.h>
int main()
{
    int n,a[10],i,j,t;
     scanf("%d",&n);
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
    printf("min num is = %d\n",a[1]);
    printf("max num is = %d\n",a[n]);
}
