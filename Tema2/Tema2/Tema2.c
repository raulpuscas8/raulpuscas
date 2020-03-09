#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void bitwise( int* x, int* y ) 
{
  if (x != y)
  {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
  }
}
int main()
{
	int a, b;

	printf("Se inverseaza doua numere:");
	scanf("%d", &a);
        scanf("%d", &b);
        bitwise(&a, &b);
        printf("a=%d, b=%d", a,b);
	return 0;
}
