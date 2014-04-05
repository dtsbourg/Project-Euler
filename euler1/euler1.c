#include <stdio.h>

int main (void)
{
    unsigned int s=0; int i;
    for (i=0;i<1000;i++)
    {
        //Is bitwise faster than || ?
        if(!(i%3)|!(i%5))
            s += i;
    }
    printf("Sum of all multiples of 3 or 5 is : %u\n", s);
  return 0;
}
