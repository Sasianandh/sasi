#include<stdio.h>
#include<conio.h>
int swap (int *,int *);
int main()
{
int i,n,j,a;
printf("enter two numbers n & a");
scanf("%d %d",&n,&a);
swap(&n,&a);
printf("after swap n=%d a=%d",n,a);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    }
    
