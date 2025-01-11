#include <stdio.h>
int main()
{
	int a,b;
 	printf("ENTER TWO NUMBERS TO SWAP BETWEEN THEM: \n");
        scanf("%d %d",&a,&b);


		a=a+b;
		b=a-b;
		a=a-b;

	printf("AFTER SWAPPING THE NUMBERS ARE: %d %d \n",a,b);
	return 0;
}

