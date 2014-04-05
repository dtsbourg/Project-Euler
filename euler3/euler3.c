#include <stdio.h>

int sum_odd_until(int n)
{
    unsigned int f1 = 1, f2 = 1, f3 = 2;
    unsigned int s = 0;
    while (f3 < n) {
      f3 = f1 + f2;

    if(!(f3%2)) s += f3;

      f1 = f2;
      f2 = f3;
    }
    return s;
}

int main(void){
    printf("%i\n", sum_odd_until(4000000));
    return 0;
}
