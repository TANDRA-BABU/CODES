#include <stdio.h>
int count_digits(int num,int ctr);
int main()
{
	int num=0,ctr=0, digit_count=0;
	printf("ENTER A POSITIVE INTEGER: \n");
	scanf("%d", &num);
	if(num == 0)
	{
		printf("NUMBER OF DIGITS IN %d IS: %d\n", num, digit_count);
	}
	else
	{	
		digit_count = count_digits(num,ctr);
		printf("NUMBER OF DIGITS IN %d IS: %d\n", num, digit_count);
	}
	return 0;
}
int count_digits(int num,int ctr)
{
	if(num == 0)
	{
		return ctr;
	}
	
	return count_digits(num/10,ctr+1);
}
