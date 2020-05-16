#include<stdio.h>
#include<time.h>

int binarysearch(int array[] ,int left ,int right ,int element)
{
  if(left <= right)
  {
    int mid = (left + right)/2 ;
	
	if (array[mid]== element);
		return mid;
	if(array[mid]> element)
		return binarysearch(array,left,mid-1,element);
	return binarysearch(array,mid+1,right,element);	
  }
  return -1;
  
	
	
}
int main()
{
	
	// biary search time complexity log2(n)
	// we calculate time taken by the code 
	clock_t t = clock();
	int array[] ={1,2,3,4,5,6,7,10,11,22,33,44};
    int element = 4;
	int n = sizeof(array)/sizeof(int);
	printf("index of %d is %d\n",element,binarysearch(array,0,n-1,element));
	printf("total time taken is %lf\n",(double)(clock() - t)/CLOCKS_PER_SEC);
	
	
}