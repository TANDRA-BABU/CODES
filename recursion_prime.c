#include<stdio.h>
int prime(int a, int ctr,int i);
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int c=prime(a,0,2);
    if(c>0)
    {
        printf("%d is not a prime number.",a);
    }
    else
    {
        printf("%d is a prime number.",a);
    }
    return 0;
}

int prime(int a, int ctr,int i)
{
        if(a%i==0)
        {
            ctr++;
        }
	if(i<a)
	{
       		 prime(a,ctr,i+1);
	}
        return ctr;
    
}
