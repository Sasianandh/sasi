#include<stdio.h>
void main()
{
    char s[10][20];
    int i,n,b[100],a[100];
    gets(s);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if(s[i][0]>=97&&s[i][0]<=122)
    {
        s[i][0]=s[i][0]-32;
    }
    a[i]=s[i][0]-65;
    b[i]=a[i];
    }
}
