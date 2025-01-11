#include <stdio.h>
int main()
{
	int num,i;
	printf("ENTER A NUMBER TO CHECK IT'S PRIME FACTORS: \n");
	scanf("%d", &num);
	printf("THE PRIME FACTORS OF %d ARE: ",num);
	while(num % 2 ==0) //check for factor 2 (even number)
	{
		printf("2 ");
		num = num/2;
	}
	for(i=3; i*i<=num; i+=2)
	{
		while(num % i == 0)
		{
			printf("%d " , i);
			num = num/i;
		}
	}
	if(num > 2)
	{
		printf("%d" , num);
	}
	printf("\n");
	return 0;
}
