#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// queue using vector
int main()
{
	vector<int> q;
	vector<int> ::iterator i;
	//add value at back;
	q.push_back(5);
	q.push_back(6);
	q.push_back(10);
	q.push_back(7);
	
	for(i = q.begin();i<q.end();i++)
		cout<<*i<<" ";
	
	//delete from front
	cout<<endl;
	q.erase(q.begin());
	q.erase(q.begin());
	
	for(i = q.begin();i<q.end();i++)
		cout<<*i<<" ";
}