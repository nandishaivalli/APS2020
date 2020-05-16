#include<iostream>
using namespace std;
void swap(int arr1[], int i, int j) 
{
    int tmp = arr1[i];
    arr1[i] = arr1[j];
    arr1[j] = tmp;
}
int  main()
{
	int array[] = {1,2,1,1,2,2,0,0,1,1,1,0};
	int pivote = 1;
	int end = sizeof(array)/sizeof(int);
	int n = end;
	cout<<n<<endl;
	int start = 0;
	int mid = 0;
	while(mid<=end)
	{
		if(array[mid]<=pivote)
		{
			swap(array,start,mid);
			start++;mid++;
		}
		else if(array[mid]>pivote)
		{
			swap(array,mid,end);
			end--;
		}
		else{
			mid++;
		}
	}
	cout<<n<<endl;
	for(int i = 0;i<n;i++)
		cout<<array[i]<<" ";
	return 0;
}

		
					