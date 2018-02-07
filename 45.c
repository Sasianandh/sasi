#include<stdio.h>
int main()
{
    int a,i;
printf("enter the number\n");
scanf("%d",&a);
while(a!=0)
{
    a=a/10;
    i++;
}
printf("no of digit =%d",i);
}
