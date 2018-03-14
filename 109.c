#include<stdio.h>
void main()
{
        int a[10],i,n,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        c=a[0];
      
        for(i=1;i<n;i++)
        {
          if(a[i]<c)
           c=a[i];
        }
        printf("min = %d",c);
}
