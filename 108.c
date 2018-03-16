#include<stdio.h>
void main()
{
        int a,b,c,i,d;
        scanf("%d%d%d",&a,&b,&c);
        for(i=0;i<c;i++)
        {
              d=a+b;
              a=d;
        }
        printf("%d",d);
}
