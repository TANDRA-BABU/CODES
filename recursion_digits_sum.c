#include <stdio.h>
int digits_sum(int sum,int num);
int main()
{
	int num;
	printf("ENTER A  NUMBER TO FIND THE SUM OF IT'S DIGITS: \n");
	scanf("%d", &num);
	int x= digits_sum(0,num);
	printf("SUM OF IT'S DIGITS IS: %d",x);
	return 0;
}
int digits_sum(int sum,int num)
{
	if(num == 0)
	{
		return sum;
	}
	sum+=num%10;
	digits_sum(sum,num/10);
}
