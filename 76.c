#include<conio.h>
#include<string.h>
int main()
{
        int n,i,c=0;
        scanf("%d",&n);
        for(i=2;i<n/2;i++)
        {
                if(n%i==0)
                {
                c++; break;
                }
        
        }
        if(c>0)
        printf("yes");
        else
        printf("no");
}
