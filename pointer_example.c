#include <stdio.h>
int main()
{
	int i=10; //declare and initialize (with 10) a variable i
	int *p; //declaration of pointer variable p
 	printf("%d ", i);//print the value of i
	p=&i; //store the address of i in the pointer variable p
	i++;
	*p=*p+1;
	printf("%d %d", i, *p); //print the new value of i and p
}
