#include<stdio.h>
#include<time.h>

#define n 10

int main()
{
	clock_t t;
	int array[n];
	int element;
	
	//linear search
	printf("input %d elements\t",n);
	for(int i = 0;i<n;i++)
		scanf("%d",&array[i]);
	
	printf("search element \t");
	scanf("%d",&element);
	t = clock();
	for(int i = 0;i<n;i++)
		if(array[i] == element){
			printf("ELEMENT FOUND AT INDEX %d\n",i+1);
			break;
		}
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("%lf seconds to execute \n", time_taken); 
   
	return 0;
}