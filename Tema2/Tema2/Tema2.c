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
	int v[100], n;

	printf("Se inverseaza doua numere:");
	scanf("%d", &n);
	return 0;
}