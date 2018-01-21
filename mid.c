#include  <stdio.h>
int main()
{
    int a, i ,j ,temp; scanf("%d",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;j++)
        {
            if (a[i] > a[j])
            {
      temp =  a[i];
     a[i] = a[j];
     a[j] = temp;
      }
     }
  }
    
    printf("mediant element is:%d\n",a[n/2]);
    }
