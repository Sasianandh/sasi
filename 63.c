#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s[100]; printf("enter the paragraph");
gets(s);
int i,b,a=0;
b=strlen(s);
for(i=0;i<=b;i++)
{
if(isspace(s[i]))
{
a++;
}
}
printf("number ofwords= %d",a+1);
return 0;
}
