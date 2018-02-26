#include<stdio.h>
#include<conio.h>
void main()
{
    char s[100];
    gets(s);
    printf("without using semicolon\n");
   if(printf("%s",s))
   {
       return 0;
   }
}
