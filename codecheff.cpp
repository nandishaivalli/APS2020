#include <iostream>
#include<math.h>
#include<vector>
//https://www.codechef.com/APRIL20B/problems/STRNO
using namespace std;
 int factor(int n ,int k)
{
    vector<int> a ;
    while(n%2==0)
    {
        a.push_back(2);
        n = n/2;
    }
    for (int i = 3;i<ceil(sqrt(n));i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            a.push_back(i);
        }
    }
    if (n>2)
    a.push_back(n);
    if (a.size()<k)
    return 0;
    return 1;
}
int main() {
	// your code goes here
	int t;
	std::cin >> t;;
	while(t--)
	{
	    int x,k;
	    
	    cin>>x>>k;
	    std::cout << factor(x,k) << std::endl;
	}
	return 0;
}
