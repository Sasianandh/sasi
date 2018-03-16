#include<stdio.h>
void main()
{
    int n,b[10],k,c=0,i,a=0;
    printf("enter length");
    scanf("%d",&n);
    printf("enter number wanted to search");
    scanf("%d",&k);
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
            scanf("%d",&b[i]);
            if(b[i]==k)
            {
            c=1;
            a++;
            }
    }
if(c==1)
printf("yes %d is %d times present",k,a);
else
printf("not present");
}
