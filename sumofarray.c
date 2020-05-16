#include<stdio.h>
int sum(int * arr,int n)
{
	int sum = 0;
	for(int i = 0;i<n;i++)
		sum += arr[i];
	return sum;
}

int main()
{
	int arr[] = {1,2,3,4,56,7};
	int n = sizeof(arr)/sizeof(int);
	printf("%d ",sum(arr,n));
	return 0;
}