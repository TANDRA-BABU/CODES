#include <stdio.h>
int main()
{
	int n, n1;
	printf("ENTER A NUMBER TO CHECK WHETHER IT IS A PALINDROME NUMBER OR NOT: \n",n);
	scanf("%d",&n);
	int digit,q,rnum=0;
	n1=n;
	while (n1>0)
	{
		q=n1/10;
		digit=n1%10;
		rnum=rnum*10+digit;
		n1=q;
	}
	if (rnum == n)
	{
		printf("THIS IS A PALINDROME NUMBER");
	}
	else
	{
		printf("THIS IS NOT A PALINDROME NUMBER");
	}
}

