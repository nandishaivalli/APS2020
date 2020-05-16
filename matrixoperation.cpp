#include<iostream>
#define col 3
#define row 3
using namespace std;
		
	
int main()
{
	int a1[row][col] ={{1,2,3},{12,42,2},{12,31,2}}; 
	int a2[row][col] ={{1,2,3},{12,42,2},{12,31,2}};
	int sum[row][col] ;
	
	cout<<"sum"<<"\n";
	for(int i = 0;i<row;i++)
		for(int j = 0;j<col;j++)
			sum[i][j] = a1[i][j] + a2[i][j];
	
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++)
			cout<<sum[i][j]<<" ";
		cout<<"\n";
	}
	
	cout<<"product"<<"\n";
	
 return 0;
}