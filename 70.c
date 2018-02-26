#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=1,c,i;
    printf("enter the num");
   scanf("%d",&n);
   c=n/2;
    for(i=1;i<=c+1;i++)
    {
        if(a<=n)
        a=a*2;
        else
        break;
    }
    printf("%d's nearest greater power of 2 is = %d",n,a);
}


