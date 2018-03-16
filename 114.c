#include<stdio.h>
void main()
{
    int n,a[10],b[10],k,i,j=1;
    printf("enter length");
    scanf("%d",&n);
    printf("enter position");
     scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)
            {
            b[j]=a[i];
            j++;
            }
    }
    for(i=1;i<=j;i++)
    {
        if(i==k) 
        printf("%d",b[i]);
    }
}
