#include <stdio.h>
#include <conio.h>
void main()
{
	int A[10][10], B[10][10], C[10][10];
	int i,j,k,r1,r2,c1,c2,s;
	printf("ENTER NUMBER OF ROWS & COLUMNS FOR FIRST MATRIX: ");
	scanf("%d %d", &r1, &c1);
	printf("ENTER NUMBER OF ROWS AND COLUMNS FOR THE SECOND MATRIX: ");
	scanf("%d %d", &r2, &c2);
	if(c1!=r2)
	{
		printf("MULTIPLICATION OF THESE MATRICES ARE NOT POSSIBLE");
	}
	else
	{
		printf("ENTER ELEMENTS OF THE FIRST MATRIX: \n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				scanf("%d", &A[i][j]);
			}
		}
		printf("ENTER THE ELEMENTS OF THE SECOND MATRIX: \n");
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				scanf("%d", &B[i][j]);
			}
		}
	}
	for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				s=0;
				for(k=0; k<c1; k++)
				{
					s=s+A[i][k] * B[k][j];
				}
				C[i][j] = s;
			}
		}
	printf("\n RESULTANT MATRIX IS \n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			printf("%3d", C[i][j]);
			printf("\n");
		}
	}

	getch();
}



