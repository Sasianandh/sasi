#include<stdio.h>
void main()
{
    int k,i; char a[100];
    printf("enter the number");
    scanf("%d",&k); 
    printf("enter the char");
   
        scanf("%s",&a);
   for(i=0;i<k;i++)
    {
        printf("%c",a[i]);
    }
}
