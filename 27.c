#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s[100];
gets(s);
int i,b,a=0,g=0,h=0,j=0;
b=strlen(s);
//printf("%d",b);
for(i=0;i<b;i++)
{
if(isalpha(s[i]))
{
a++;
}
else if(isspace(s[i]))
{
g++;
}
else if(ispunct(s[i]))
{
h++;
}
else
{
j++;
}
}
if(j>0)
printf("yes");
else
printf("no");
return 0;
}
