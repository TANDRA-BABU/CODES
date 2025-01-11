#include <stdio.h>
int main()
{
	int marks[20];
	int i, total=0;
	float avg;
	printf("ENTER THE MARKS OBTAINED BY 20 STUDENTS: \n");
	for(i=0; i<20; i++)
	{
		printf("STUDENT %d: ",i+1);
		scanf("%d", &marks[i]);
		total+=marks[i];
	}
	avg= total/20.0;
	printf("\n THE AVERAGE MARKS OF THE STUDENTS IS %f\n",avg);
	return 0;
}
