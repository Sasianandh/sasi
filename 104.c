#include<stdio.h>
void main()
{
        int a,b,i,c=1;
        printf("enter number");
        scanf("%d",&a);
        printf("enter power");
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {
                c=a*c;
        }
        printf("%d",c);
}
