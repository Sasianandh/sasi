#include<stdio.h>
void main()
{
    char s[100][200];
    int i,j,n,b[100],a[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s",&s[i]);
    }
    for(i=0;i<n;i++)
    {
    if(s[i][0]>=97&&s[i][0]<=122)
    {
        s[i][0]=s[i][0]-32;
    }
    a[i]=s[i][0]-65;
    b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    printf("in alphabetic order\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
       if(a[i]==b[j])
       {
           printf("%s",s[j]);
           b[j]=0;
           break;
       }
    }
    printf("\t");
    }
}
