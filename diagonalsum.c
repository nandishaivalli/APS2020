#include<stdio.h>
int main()
{
	int n = 3;
	int arr[n][n] = {{1,2,3},
		             {4,5,6},
					{7,8,9}};
					
	// diagonal sum and difference 1+5+9 - 3+5+7
	int d1_sum=0,d2_sum=0;
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
		{
			if(i==j)
				d1_sum+=arr[i][j];
			if(i == n-j-1)
				d2_sum+=arr[i][j];
		}
		
	printf("%d",d1_sum - d2_sum);
    return 0;
}	