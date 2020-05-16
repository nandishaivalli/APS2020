#include<iostream>
using namespace std;
int main(int args,char ** argv)
{
	cout<<args<<endl;
	for(int i = 0;i<args;i++)
		cout<<argv[i];
	return 0;
}
	
