#include<stdio.h>
void swap(int * a,int * b)
{
	int tmp = *a;
	*a=*b;
	*b=tmp;
}
int partetion(int array[] ,int low,int high)
{
	int pivote = array[high];
	int i = low - 1;
	for( int j = low;j<=high-1;j++)
	{
		if(array[j] <pivote)
		{
			i++;
			swap(&array[i],&array[j]);
		}
	}
	swap(&array[i+1],&array[high]);
	return i+1;
}

void QuickSOrt(int array[],int low,int high)
{
	if(low <high)
	{
		int _partetion = partetion(array,low,high);
		
		QuickSOrt(array,low,_partetion-1);
		QuickSOrt(array,_partetion+1,high);
	}
}

int main()
{
	int array[]= {1,2,5,2,44,2,1,5,1,56,6,4,3,1,4,2};
	int n = sizeof(array)/sizeof(int);
	QuickSOrt(array,0,n-1);
	for(int i = 0;i<n;i++)
		printf("%d ",array[i]);
	
	return 0;
}
