#include <stdio.h>

int main (void)
{
    //Can not be smaller than product of primes < 24
    unsigned long j=223092870;
    unsigned int k=0;
    unsigned int i=0;
    while (1)
    {
        printf("%lu\n", j);
        for (i=1;i<=20;i++)
        {
            if(j%i == 0) k++;
            else break;
        }

        if (k==20)
        {
            printf("%lu\n", j);
            return 0;
        }

        else
        {
            j++;
            k=0;
        }
    }
}
