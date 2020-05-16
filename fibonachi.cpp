#include<iostream>
using namespace std;
#define n 10
int main()
{
	int array[n];
	array[0] = 1 ;
	array[1] = 1;
	for(int i = 2;i<n;i++)
		array[i] = array[i-1] + array[i-2] ;
	
	for(int i = 0;i<n;i++)
		cout<<array[i]<<" " ;
	return 0;
}
	