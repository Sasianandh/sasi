#include <stdio.h>
int main()
{
    int b,a, i,c;
    printf("intervals are");
    scanf("%d %d", &b, &a);
 printf("Prime numbers between %d and %d are: ", b,a);
    while (b<a)
    {
       c=0;
     for(i = 2; i <= a/2; ++i)
     {
            if(b % i == 0)
      {
       c = 1;
          break;
            }
        }

 if (c == 0)
          printf("%d ", b);
++b;
    }
return 0;
}
