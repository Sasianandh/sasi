#include<stdio.h>
int main()
{
    char d[100]; int i,a;
printf("given a string or word\n");
gets(d);
printf("enter the number\n");
scanf("%d",&a);
for(i=0;i<a;i++)
{
    puts(d);
}
return 0;
}



