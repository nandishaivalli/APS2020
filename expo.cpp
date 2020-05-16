// e^x
#include <stdio.h> 

double e(int x, int n) 
{ 
	static double p = 1, f = 1; 
	double r; 

	if (n == 0) 
		return 1; 

	r = e(x, n - 1); 

	p = p * x; 

	f = f * n; 

	return (r + p / f); 
} 

int main() 
{ 
	int x = 1, n = 10; 
	printf("%lf \n", e(x, n)); 

	return 0; 
} 
