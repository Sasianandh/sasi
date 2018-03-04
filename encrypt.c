#include<conio.h>
#include<string.h>
int main()
{
        char s[100];
        int c,i,b,j,d=1,k,n=1,z=0,l=0;
        gets(s);
        c=strlen(s);
        for(j=0;j<c;j++)
                {
                        if(isspace(s[j]))
                        {
                                z++;
                        }
                }
                
                while(n<=z+1)
        {
                for(j=d;j<c;j++)
                {
                        if(isspace(s[j]))
                        {
                l=1;   break;
                        }
                }
                if(l>0)
                b=j-1;
                else
                b=c-1;
                
        for(k=d;k<=b;k++)
        
        {
                printf("%c",s[k]);
               
        }
         printf("%c",s[d-1]);
         printf("ay ");
         d=j+2;
         n++;
         }
}
   
