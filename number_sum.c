#include <stdio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER TO PRINT THE SUM OF ITS DIGITS: \n");
	scanf("%d", &num);
	int num2 = num;
	int dig, q, sum=0;
	while(num2>0)
	{
		q=num2/10;
		dig=num2%10;
		sum=sum+dig;
		num2=q;
	}
	printf("SUM IS: %d",sum);
}
