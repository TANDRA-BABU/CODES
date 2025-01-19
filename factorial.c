#include <stdio.h>
long factorial(int n)
{
	 if (n == 0) 
	 {
		return 1;
	 }
	 else
	{
         return n * factorial(n - 1);
	}
}
int main() 
{
    int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("Factorial of %d is %lu\n", num, factorial(num));
    return 0;
}