#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
        char s[100];
        int n,i,b;
        gets(s);
        n=strlen(s);
         b=n/2;
        if(n%2==0)
        {
             s[b]='*';
             s[b-1]='*';
        }
        else
        {
            s[b]='*';
        }
        for(i=0;i<n;i++)
        {
                printf("%c",s[i]);
        }
        return 0;
}
