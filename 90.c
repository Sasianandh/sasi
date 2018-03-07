#include<stdio.h>
#include<string.h>
void main()
{
        char s[100],j;
        int i,n,m;
        gets(s);
        m=strlen(s);
        for(i=0;i<m;i++)
        {
              for(j='0';j<='9';j++)  
              {
                      if(s[i]==j)
                      printf("%c",s[i]);
              }
}
}

