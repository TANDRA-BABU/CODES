#include <stdio.h>
int main()
{
	int c=0;
	int marks[5]={90,92,95,85,50};
	for(int i=0; i<=4; i++)
	{
		c+=*(marks+i);
	}
	printf("SUM = %d", c);
}
