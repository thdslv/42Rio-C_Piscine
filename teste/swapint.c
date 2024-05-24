#include <stdio.h>
void swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
int main()
{
	int a = 10;
	int b = 42;
	swap(&a, &b);
	printf("%i\n%i", a, b);
	return (0);
}
