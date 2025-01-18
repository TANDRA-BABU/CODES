#include <stdio.h>
int fib(int *a, int *b);
int main()
{
	int a=0, b=1;
	printf("FIBONACCI SERIES: ");
	fib(&a,&b); //call by reference or address
}
int fib(int *a, int *b)
{
	for(int i=0; i<10; i++)
	{
		printf("%d ", *a);
		*b = *a + *b;
		*a = *b - *a;
	}
	return 0;
}
