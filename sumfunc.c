#include <stdio.h>  //header file
#include <conio.h>
int add(int , int); //function prototype declaration
int main()  // main function
{
	int a,b,sum; // variable declaration
	printf(" ENTER TWO NUMBERS: "); //I/O
	scanf(" %d %d ", &a, &b);
	sum=add(a,b);  // Operation, function call
	printf("SUM IS: %d", sum);
	getch();
	return 0;
}
int add (int x, int y)
{
	int z;
	z=x+y;
	return (z);
}


