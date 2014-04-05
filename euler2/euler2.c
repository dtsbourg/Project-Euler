#include <stdio.h>

unsigned long sum_odd_until(unsigned long n)
{
    unsigned long f1 = 1, f2 = 1, f3 = 2;
    unsigned long s = 0;
    while (f3 < n) {
      f3 = f1 + f2;

    if(!(f3%2)) s += f3;

      f1 = f2;
      f2 = f3;
    }
    return s;
}

int main(void){
    printf("%lu\n", sum_odd_until(4000000));
    return 0;
}
