#include<stdio.h>
void main()
{
       char s[100];
       printf("enter string");
       gets(s);
       int i,c,d;
       printf("enter position");
       scanf("%d",&d);
       c=strlen(s);
       for(i=c-1;i>c-1-d;i--)
       {
               printf("%c",s[i]);
       }
}
