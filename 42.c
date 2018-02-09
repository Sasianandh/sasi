#include<stdio.h>
#include<string.h>
int main()
{
    int c,d;
    char a[10],b[10];
    gets(a); gets(b);
    c=strlen(a);
    d=strlen(b);
    if(c>=d)
    puts(a);
    else
    puts(b);
}
