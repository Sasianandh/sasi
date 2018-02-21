#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int c,d,f=0,h,e,i,j,o,p=0,w=0,l=0,z;
char a[100]; char b[100];
char n[10]="flames";   clrscr();
printf("enter your name\n");
scanf("%s",&a); 
printf("enter your crush name\n");
 scanf("%s",&b);
c=strlen(a);
d=strlen(b);
h=c+d;
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
if(a[i]==b[j])
{
f=f+2; b[j]='\0'; break;
}
}
}
o=h-f;
if(o>0)
{
while(p<5)
{
while(w<8)
{
if(w>5)
{
w=0;
}
if(isalpha(n[w]))
{
l++;
if(l==o)
{
n[w]=' ';
l=0;break;
}
}
w++;
}
p++;
}
for(i=0;i<6;i++)
 {
 if(isalpha(n[i])) {
 z=i; break;    }
 }
printf("your relationship will end in\n");
 switch(z)
{
case 0:
printf("friend");
break;
case 1:
printf("love");
break;
case 2:
printf("affection");
break;
case 3:
printf("marriage");
break;
case 4:
printf("enemy");
break;
case 5:
printf("sister");
break;
default:
printf("error occured");
}
}
else
{
printf("made for each other");
}
getch();
}


