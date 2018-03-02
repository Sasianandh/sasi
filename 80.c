#include<stdio.h>
int main()
{
    int n,i,b=0,a[10],c;
    scanf("%d",&n);
    while(n!=0)
    {
       c=n%10;
       if(c%2!=0)
      { 
       a[b]=c;
        b++;
      }
       n=n/10;
    }
for(i=b-1;i>=0;i--)
{
    printf("%d",a[i]);
}
}
