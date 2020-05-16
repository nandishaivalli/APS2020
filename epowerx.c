#include<stdio.h>
int main()
{
	double e =1;
	double tmp = 1; 
	int x = 2;
	for(int i = 1;i<100;i++)
	{
		tmp = tmp*x/i ;
		e = e + tmp;
	}
	printf("%lf",e);
	return 0;
}
    