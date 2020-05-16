#include<iostream>
// to print the maxium product of two numbers in the array
using namespace std;
int main()
{
	int array[] = {1,2,4,2,5,2,1,4,2,1,7};
	int maxindex1,maxnumber1 = -0xfffffff ,maxnumber2=-0xfffffff;
	int n = sizeof(array)/sizeof(int);
	for(int i = 0;i<n;i++)
		if(array[i]>maxnumber1){
			maxnumber1 = array[i];
			maxindex1 = i;
		}
		
	for(int i = 0;i<n;i++)	
		if(i!=maxindex1 && array[i] > maxnumber2)
			maxnumber2 = array[i];
		
	cout<<maxnumber1*maxnumber2 ;
	return 0 ;
}	