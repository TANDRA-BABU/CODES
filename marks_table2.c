#include <stdio.h>
int main()
{
	float marks [3][5];
	printf("ENTER THE MARKS: \n");
	for(int i=0; i<3; i++)
	{
		for (int j=0; j<5; j++)
		{
			printf("ENTER MARKS [%d][%d]: ",i,j);
			scanf("%f", &marks[i][j]);
		}
	}
	printf("MARKS OF THE STUDENTS IN TABULAR FORMAT IS REPRESENTED -- \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%.1f\t", marks[i][j]);
		}
		printf("\n");
	}
}
