#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int array[]={-6,-5,-2,-1,1,3,5,6,7};
	int n = sizeof(array)/sizeof(int);
	int squredarray[n];
	int indexofzero = 0;
	for(int i = 0;i<n-1;i++)
		if(array[i] <=0 && array[i+1]>0)
			indexofzero = i;
	
	cout<<indexofzero<<"\n";
	
	int i = indexofzero,j = n-1,k = n;
	//i for -ve numbers j fro + numbers
	while(k>0)
		squredarray[--k] = 
			(j<0 ||(i>=0 && abs(array[i]) >= array[j]))? pow(array[i--],2):pow(array[j--],2) ;
		
	for(int i = 0;i<n;i++)
		cout<<squredarray[i]<<" ";
		
	return 0;
}