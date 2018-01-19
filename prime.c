#include <stdio.h>
int main()
{
    int a,b, i,c;
    printf("intervals are");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (a<b)
    {
       c=0;

        for(i = 2; i <= b/2; ++i)
        {
            if(a % i == 0)
            {
               c = 1;
                break;
            }
        }

        if (fc == 0)
            printf("%d ", a);

        ++a;
    }

    return 0;
}
