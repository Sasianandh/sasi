#include<stdio.h>
int main()
{
    int n,a=1,i=1,j,t=0;
    printf("enter the num\n");
     scanf("%d",&n);
while(i<n)
{
    a=2*a;
    if(a==n)
    {
      t++;
      break;
    }
      else 
      i++;
    }
    if(t==1)
    printf("yes it is power of 2");
    else
    printf("no it is not power of 2");
}
