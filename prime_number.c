#include <stdio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER TO CHECK WHETHER IT IS A PRIME NUMBER OR NOT: ");
	scanf("%d", &num);
	int n=2, lim=num/2;
	for(n=2; n<=lim; n++)
	{
		if(num % n == 0)
			break;
	}
	if(n>lim)
	{
		printf("THIS IS A PRIME NUMBER");
	}
	else
	{
		printf("THIS IS NOT A PRIME NUMBER");
	}	
}	
