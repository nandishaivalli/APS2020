#include<stdio.h>
int main()
{
// given two numbers check id= their summ == xor 
int a = 125 , b = 0;
int sum = a+b;
int x = a xor b;
if(sum == x)
   printf("a+b == a^b");
else 
	printf("a+b != a^b");
return 0;

}
