#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s[10]="hai sasi";

int i,b,a=0;
b=strlen(s);
//printf("%d",b);
for(i=0;i<=b;i++)
{
if(isalpha(s[i]))
{
a++;
}
}
printf("%d",a);
return 0;
}
