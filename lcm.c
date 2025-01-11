#include <stdio.h>
int main()
{
	int num1, num2, max, lcm;
	printf("ENTER TWO NUMBERS: \n");
	scanf("%d %d", &num1, &num2);
	if (num1>num2)
	{
		max=num1;
	}
	else
	{
		max=num2;
	}
	while(1)
	{
		if (max % num1 == 0 && max % num2 == 0)
	{
		lcm=max;
		break;
	}	
	max++;
	}
	printf("THE LCM OF TWO GIVEN NUMBERS ARE: %d\n", lcm);
	return 0;
}
