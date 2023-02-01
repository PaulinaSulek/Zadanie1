#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int obliczFibo(int n)
{
  return roundl((powl((1+sqrtl(5))/2,n)-powl((1-sqrtl(5))/2,n))/sqrtl(5));
}
int main()
{
  printf("Fibo.c\n");
  printf("Paulina Sulek \n");
  printf("I2S 1.4\n");
  printf("Numer elem. ciągu Fibonacciego (z wartości <0, 89>): \n");
  int n=0;
  if (scanf("%d", &n) != 1 || n < 0 || n > 89)
  {
    printf("Zły numer elementu ciągu.!\n");
    return EXIT_FAILURE;
  }
  unsigned long long int result = obliczFibo(n);
  printf("Wartość ciągu dla elementu o nr %d wynosi: %llu\n", n, result);
  return EXIT_SUCCESS;
}