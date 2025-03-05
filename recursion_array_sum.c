#include <stdio.h>
int array_sum(int n,int arr[], int x ,int sum);
int main()
{
	int n;
	printf("ENTER THE NUMBER OF ELEMENTS: ");
	scanf("%d", &n);
	int arr[n];
	printf("ENTER THE ELEMENTS IN THE ARRAY: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int x = array_sum(n,arr,0,0);
	printf("SUM OF THE ARRAY ELEMENTS: %d\n",x);
	return 0;
}
int array_sum(int n,int arr[],int x,int sum)
{
        if(x>=n)
	{
	return sum;
	}
    sum+=arr[x];
	return array_sum(n,arr,x+1,sum);	
}
