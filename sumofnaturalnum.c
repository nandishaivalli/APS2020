// sum of n natural numbers
#include<stdio.h>
int sum(int n)
{
	int sum = 0;
	for(int i = 1;i<n+1;i++)
		sum+=i;
	return sum;
}

int sum(int n ,int c)
{
	float sum = (n)*(n+1)/2;
	return sum;
}
int main()
{
	int n = 10;
	printf("%d",sum(n));
	printf("\n%d",sum(n,0));
	return 0;
}