#include<stdio.h>
void main()
{
        char s[100],k;
        int c,i,j,t;
        gets(s);
        c=strlen(s);
        for(i=0;i<c;i++)
        {
                for(j=i+1;j<c;j++)
                {
                        if(s[i]>s[j])
                        {
                           t=s[i];
                           s[i]=s[j];
                           s[j]=t;
                        }
                }
                printf("%c",s[i]);
                
        }
}
