#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//stsck using vector
int main()
{
	vector<int> stack;
	stack.push_back(5);
	stack.push_back(4);
	stack.push_back(6);
	
	stack.pop_back();
		for(auto i = stack.begin();i<stack.end();i++)
		cout<<*i<<endl;
	return 0;
}