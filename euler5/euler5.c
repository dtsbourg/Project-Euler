#include <stdio.h>

unsigned long gcd(unsigned long a, unsigned long b )
{
    unsigned long result=0;
    unsigned long x = a;
    unsigned long y = b;

    while (y)
    {
        result = x%y;
        x=y;
        y=result;
    }
    return x;
}

unsigned long lcm(unsigned long a, unsigned long b)
{

    return (a*b)/gcd(a,b);
}


int main (void)
{
    unsigned long n = 11;
    unsigned int i=11;

    for(i=11;i<=20;i++)
    {
        n = lcm(n,i);
    }

    printf("%lu\n", n);
}
