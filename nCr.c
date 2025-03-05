#include <stdio.h>
int main()
{
	int n,r,i;
	long int result1, result2, result3;
	printf("Input the integer for n and r: \n");
	scanf("%d %d", &n, &r);
	result1=1;
	for(i=1; i<=n; i++)
	{
		result1 = result1 * i;
	}
	result2=1;
	for(i=1; i<=r; i++)
	{
		result2 = result2 * i;
	}
	result3=1;
	for(i=1; i<=n-r; i++)
	{
		result3 = result3 * i;
	}
	printf("Value of nCr is %ld\n", result1/(result2*result3));
}
