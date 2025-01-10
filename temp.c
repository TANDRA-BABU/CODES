#include <stdio.h>
int main()
{
	float f,c;
	for (c=10;c<=100;c+=10)
	{
		f=(9.0/5.0)*c+32;
		printf("\n %.2f DEGREE CELCIUS IN FAHRENHEIT IS %.2f DEGREE",c,f);
	}
	return 0;
}

