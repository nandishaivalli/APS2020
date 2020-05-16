#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n = 3;
	int array1[n][n] = {{1,2,3},
					   {1,2,3} ,
						{4,4,2}};
	int array2[n][n] = {{1,2,6},
					    {3,4,6},
					    {4,5,6}};
	
	
	
	int product[n][n];// = {0};
	memset(product,0,sizeof(product));
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j < n;j++)
			cout<<product[i][j]<<" ";
		cout<<"\n";
	}
	for(int i = 0;i<n;i++)
		for(int j = 0;j < n;j++)
			for(int k = 0;k<n;k++)
			{
				product[i][j] = +array1[i][k]*array2[k][j];
			}
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j <n;j++)
			cout<<product[i][j]<<" ";
		cout<<"\n";
	}
}