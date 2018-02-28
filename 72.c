#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char a[200]; 
   int n,i,c=0;
   printf("enter word");
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       if(isalpha(a[i]))
       {
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       c++;
       }
   }
   if(c>0)
   printf("yes");
   else
   printf("no");
}
