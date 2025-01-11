#include <stdio.h>
int main()
{
	int min=5001, max=-1, val;
	int i;
	printf("ENTER 10 NATURAL NUMBERS");
		for(i=0; i<10; i++)
	{
		printf("NUMBER %d: ",i+1);
		scanf("%d", &val);
		if(val<min)
		{
			min=val;
		}
		else if(val>max)
		{
			max=val;
		
		}
	}
		printf("MIN = %d, MAX = %d, DIFFERENCE BETWEEN MIN AND MAX = %d\n", min, max, (max-min));
	}

