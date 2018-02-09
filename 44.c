
#include<stdio.h>
int main()
{
    int n,a=1,i=1,j,t=0;
    printf("enter the num\n");
     scanf("%d",&n);
while(i<=10)
{
    
    if(i==n)
    {
     t++; break;
    }
      else 
       i++;  
    }
    if(t==1)
    printf("yes it is in the range");
    else
     printf("no it is not in the range"); 
}
