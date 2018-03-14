#include<stdio.h>
void main()
{
        char s[100];
        int i,c;
        gets(s);
        c=strlen(s);
        for(i=0;i<c;i++)
        {
                if(s[i]>=97&&s[i]<=122)
                {
                s[i]=s[i]-32;
                printf("%c",s[i]);
                }
                else
                printf("%c",s[i]);
        }
}
