#include <stdio.h>
int main(void)
{
  unsigned long long n = 600851475143;
  unsigned long long x;

  for (x= 2; x < n; x++) 
  {
    while (n % x == 0)
    {
      n=n/x;
    }
  }
  printf("%llu\n", n);

  return 0;
}