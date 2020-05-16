#include<iostream>
using namespace std;
int main()
{
	// given an array of sorted intigers return the squred soreted array of same
	int array[]={-6,-5,-2,-1,1,3,5,6,7};
	int n = sizeof(array)/sizeof(int);
	int left = 0,right = n-1;
	int sqredarray[n];
	for(int i = n-1;i>=0;i--)
	{
		if(abs(array[left]) <array[right])
		{
			sqredarray[i] = array[right]*array[right];
			right--;
		}
		else
		{
			sqredarray[i] = array[left]*array[left];
			left++;
		}
	}
	
	for(int i = 0;i<n;i++)
		cout<<sqredarray[i]<<" ";
	return 0;
}
	
	