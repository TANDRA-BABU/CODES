#include <stdio.h>
int reverse(int *arr, int n);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int n=sizeof(arr) / sizeof(arr[0]);
	reverse(arr, n);
	printf("Reversed array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
int reverse (int *arr, int n)
{
	int *first= arr;
	int *last=arr+n-1;
	while (first < last)
	{
		int ptr = *first;
		*first = *last;
		*last = ptr;
		first++;
		last--;
	}
}
