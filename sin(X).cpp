#include<iostream>
using namespace std;
int main()
{
	int x = 1; // in radians
	float sum = x;
	int tmp = 1;
	// x - x^3/3! + x^5/5! + .....
	for(int i = 0;i<10;i++)
	{
		tmp *= -1*x*x/(i+2);
		cout<<tmp<<" ";
		sum+= tmp;
	}
	cout<<sum;
	return 0;
}