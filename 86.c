#include<stdio.h>
void main()
{
        char s[100],k;
        int c,i,j,t=0;
        gets(s);
        c=strlen(s);
        for(i=0;i<c;i++)
        {
                for(j=i+1;j<c;j++)
                {
                        if(s[i]==s[j])
                        t=1;
                        
                }
                
        }
        if(t==1)
        printf("no");
        else
        printf("yes");
}
