#include<stdio.h>
#include<string.h>
void main()
{
        char s[100];
        int i,n,f=1,c;
        gets(s);
        c=strlen(s);
        for(i=0;i<c/2;i++)
        {
                if(s[i]==s[c-i-1])
                {
                        f=0;
                }
                else
                {
                        f=1;
                break;
                }
        }
        if(f==0)
        printf("palindrome");
        else
        printf("not");
}
