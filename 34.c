#include<stdio.h>
#include<string.h>
int main()
{
char a[1000]; int i,j,c=0;
 gets(a); 
i=strlen(a);
for(j=0;j<i;j++)
{
    if(a[j]=='.')
    c++;
}
printf("%d",c);
}
