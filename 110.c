#include<stdio.h>
void main()
{
        int a,c=0,i;
        printf("enter range");
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
                c=c+i;
        }
        printf("%d",c);
}
