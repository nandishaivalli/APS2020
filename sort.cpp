#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> list;
	int n = 5;
	int ele;
	cout<<"input "<<n<<"elements"<<endl;
	cin>>ele;
	list.push_back(ele);
	for(int i = 1;i<n;i++)
	{
		cin>>ele;
		//list.push_back(ele);
		for(int j = 0;j<i;j++)
		{
			if(ele<list[j])
				;
			else
				list.insert(list.begin()+j,ele);
		}
	}
	
	for(auto k = list.begin();k<list.end();k++)
		cout<<*k<<" ";
	return 0;
}
				