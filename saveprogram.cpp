#include<iostream>
using namespace std;
int main(int args,char ** argv)
{
	string cmd = "g++ -o " + *argv[1] + *argv[2] ;
	cout<<"compiling"<<endl;
	const char * command = cmd.c_str();
	system(command);
	cout<<"compiled"<<endl;
	command = (argv[1]).c_str();
	system(command);
	return 0;
}
	
