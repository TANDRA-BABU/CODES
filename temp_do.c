#include <stdio.h>
int main()
{
	float f,c=10;
	do
	{
		f=(9.0/5.0)*c+32;
		printf("\n %.2f DEGREE CELCIUS IN FAHRENHEIT IS %.2f DEGREE",c,f);
		c+=10;
	}
	while (c<=100);
	return 0;
}
