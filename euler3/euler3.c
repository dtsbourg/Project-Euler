#include <stdio.h>

int main(void)
{
  unsigned long n = 600851475143;
  unsigned long i;

  for (i = 2; i < n; i++) {
    while (!(n%i))
      n /= i;
  }

  printf("%lu \n", n);
  return 0;
}
