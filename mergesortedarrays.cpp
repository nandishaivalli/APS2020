#include<iostream>
using namespace std;
int main()
{
	int array1[] = {1,5,8,9,12,17,20};
	int array2[] = {1,2,4,5,8,10};
	int n1 = sizeof(array1)/sizeof(int);
	int n2 = sizeof(array2)/sizeof(int);
	
	int array[n1+n2];

	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(array1[i]<array2[j])
			array[k++] = array1[i++];
		else
			array[k++] = array2[j++];
		
	}
	while (i < n1) 
        array[k++] = array1[i++]; 
  
    while (j < n2) 
        array[k++] = array2[j++];
	
	for(int i = 0;i<n1+n2;i++)
		cout<<array[i]<<" ";
    return 0;
}