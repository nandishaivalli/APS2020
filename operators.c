#include<stdio.h>
int main()
{
	// basic operations are +.-,/,*,%  && logical AND  ,|| logical OR
	int a,b;
	
	printf("input values of a,b ");
	scanf("%d%d",&a,&b);
	printf("sum() %d + %d =%d\n",a,b,a+b);
	printf("difference() %d - %d =%d\n",a,b,a-b);
	printf("division() %d / %d =%d\n",a,b,a/b);
	printf("multiplicatin() %d * %d =%d\n",a,b,a*b);
	return 0;
}