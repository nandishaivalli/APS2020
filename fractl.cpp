#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
	int j = 1;
	int factors =0;
	long n;
	cin>>n;
	if (n==0 || n<5)
	cout<<factors<<endl;
    else
	{
		while(n/pow(5,j) >0)
		{
			factors+=n/pow(5,j);
			j++;
		}
		cout<<factors<<endl;
	}
	
	}
	return 0;
}
	