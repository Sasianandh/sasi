#include<stdio.h>
#include<string.h>
void main()
{
        char s[100],b[100],c[100];
        int i,n,j=0,k=0,m;
        gets(s);
        m=strlen(s);
        for(i=0;i<m;i=i+2)
        {
                c[k]=s[i];
                printf("%c\t",c[k]);
                k++;
        }
        printf("\n");
        for(i=1;i<m;i=i+2)
        {
                b[j]=s[i];
                printf("%c\t",b[j]);
                j++;
        }
}
