#include <stdio.h>
int main()
{
	float m;
	printf("ENTER SUBJECT MARKS: ");
	scanf("%f",&m);
	if (m>=40)
	{
		printf("PASSED\n");
	}
	else 
	{
		printf("FAILED\n");
	}
	return 0;
}
