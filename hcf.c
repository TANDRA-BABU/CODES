#include <stdio.h>
int gcd(int a, int b)
	{
		if(a>=b)
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		if(b%a==0)
		{
			return a;
		}
		else
		{
			return (gcd(b%a,a));
		}
	}
		int main()
		{
			int num1,num2;
			printf("ENTER TWO NUMBERS: ");
			scanf("%d %d", &num1, &num2);
			int hcf=gcd(num1, num2);
			printf("THE HCF OF %d and %d IS: %d\n", num1, num2, hcf);
			return 0;
		}




