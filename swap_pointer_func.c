#include <stdio.h>
void swap(int *a, int *b); //declaration
                        //swapping two user inputs using functions and pointer
int main()
{
	int a,b;
	printf("ENTER TWO NUMBERS TO SWAP: ");
	scanf("%d %d", &a, &b);
	swap (&a, &b);
	printf("\nSWAPPED NUMBERS ARE: %d %d", a, b);
	return 0;
}
void swap(int *a, int *b) //defination
{
	int c= *a;
	*a=*b;
	*b=c;
	printf("WITHIN SWAP THE VALUES ARE: %d %d", *a,*b);
}	

