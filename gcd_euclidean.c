#include <stdio.h>
int main()
{
	int divn, divs;
	printf("ENTER TWO NUMBERS TO FIND GCD: ");
	scanf("%d %d", &divn, &divs);
	int remn=divn%divs;
	while (remn!=0)
	{
		divn=divs;
		divs=remn;
		remn= divn%divs;
	}
	printf("GCD IS: %d", divs);
}

