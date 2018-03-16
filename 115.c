#include<stdio.h>
void main()
{
    int n,a[10],k,i,j,t;
    printf("enter length");
    scanf("%d",&n);
    printf("enter position");
     scanf("%d",&k);
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
            if(i==k)
           printf("smallest number in %d position = %d",k,a[i]);
            }
    
}
