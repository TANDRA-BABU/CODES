#include <stdio.h>
int main()
{
	float marksfirst [3][5];
	printf("ENTER THE MARKS IN FIRST EXAM:\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("[%d][%d]:",i,j);
			scanf("%f", &marksfirst[i][j]);
		}
	}
	float markssecond [3][5];
	printf("\nENTER THE MARKS IN SECOND EXAM:\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("[%d][%d]:",i,j);
			scanf("%f", &markssecond [i][j]);
		}
	}
	float sum [3][5];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
		{
			sum[i][j] = marksfirst [i][j] + markssecond [i][j];
		}
	}
	printf("\nSUM OF THE TWO MATRICES: \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%.1f\t", sum[i][j]);
		}
		printf("\n");
	}
}
