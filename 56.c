#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
    int a=0,b=0,i,c;
    char s[10],j; gets(s);
    c=strlen(s);
    for(i=0;i<c;i++)
    {
        if(isalpha(s[i]))
        {
        a++;
        }
         for(j='0';j<='9';j++)
    {
        if(s[i]==j)
        b++;
    }
    }
    if(a>0 && b>0)
    printf("yes");
    else
    printf("no");
}
