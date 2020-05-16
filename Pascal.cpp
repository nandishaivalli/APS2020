
#include<bits/stdc++.h> 
using namespace std; 

int min(int a, int b) 
{ 
	return (a < b) ? a : b; 
} 
void binomialCoeff(int n) 
{ 
	int C[n + 1][n + 1]; 
	int i, j; 

	for (i = 0; i <= n; i++) 
	{ 
		for (j = 0; j <= i; j++) 
		{ 
			
			if (j == 0 || j == i) 
				C[i][j] = 1; 

			
			else
				C[i][j] = C[i - 1][j - 1] + 
						C[i - 1][j]; 
		} 
	} 

      for(i = 0;i<n;i++){
		  for(j = 0;j<=i;j++)
			  cout<<C[i][j]<<" ";
		cout<<"\n";  
	  }
	; 
} 


int main() 
{ 
	int n = 10; 
	
	binomialCoeff(n); 
} 