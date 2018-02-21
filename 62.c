#include<stdio.h>
#include<string.h>
void main()
{
    int i,d=0,e=0,c; char a[100];
    printf("enter the char");
   
        scanf("%s",&a);
        c=strlen(a);
 for(i=0;i<c;i++)
 {
     if((a[i]=='0')||(a[i]=='1'))
    {
         d++;
}
     else
     {
        e++; 
     }
    
 }
 if(e==0)
    printf("yes");
    else
    printf("no");
}
