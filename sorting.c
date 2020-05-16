#include<stdio.h>
#include<time.h>
void bubblesort(int *array,int n)
{
	for(int i = 0;i<n-1;i++)
		for(int j = 0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int tmp = array[j];
				array[j] = array[j+1];
				array[j+1]=tmp;
			}
		}
		
}
void inserctionSort(int * array,int n)
{
	int key ;
	for(int i = 1;i<n;i++)
	{
		key = array[i];
		int j = i -1;
		while(j>=0 && array[j] > key)
		{
			array[j+1] = array[j] ;
			j = j-1;
		}
		array[j+1] = key;
	}
}

int main()
{
	int array[] = {100,99,88,77,66,5,4,33,220,11,10,1,-11,10,-199};
	int n = sizeof(array)/sizeof(int);
	clock_t t = clock();
	bubblesort(array,n);
	printf("time taken to sort %lf\n",(double)((clock()-t)/CLOCKS_PER_SEC));
	for(int i = 0;i<n;i++)
		printf("%d ",array[i]);
	
	printf("\n\n");
	
	int array1[] = {100,99,88,77,66,5,4,33,220,11,10,1,-11,10,-199};
	n = sizeof(array)/sizeof(int);
	t = clock();
	inserctionSort(array1,n);
	printf("time taken to sort %lf\n",(double)((clock()-t)/CLOCKS_PER_SEC));
	for(int i = 0;i<n;i++)
		printf("%d ",array1[i]);
	
	
	return 0;
}