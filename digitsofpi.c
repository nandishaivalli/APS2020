#include<stdio.h>
#include<math.h>
// find digits of pi using ramanujans formula
fact(long n)
{
	int i =1,f=1;
	if(n==0 || n ==1)
		return 1;
	for(;i<=n;i++)
		f*=i;
	return f;
}
int main()
{
double sum =0,tmp;
int k =0,n = 5;
while(k<n){
	tmp = ((fact(4*k))/pow(fact(k),4))*((26390*n+1103)/pow(396,4*k));
	//printf("%lf   ",tmp);
	sum+=tmp;
    k++;
}
sum = sum*sqrt(8)/9801;
printf("%lf",(double)(1/sum));
return 0;
}