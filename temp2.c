#include <stdio.h>
int main()
{
	int c=10;
	float f;
	while (c<=100)
	{
		f=(9.0/5.0)*c+32;
		printf("CELCIUS:%d, fahrenheit: %.2f\n",c,f);
		c=c+10;
	}
		return 0;
}
