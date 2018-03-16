#include<stdio.h>
void main()
{
    int n,b[10],k,c=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
            scanf("%d",&b[i]);
            if(b[i]==k)
            c=1;
    }
if(c==1)
printf("yes");
else
printf("no");
}
