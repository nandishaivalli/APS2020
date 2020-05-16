#include <iostream>
#include<string>
using namespace std;
class opjoin
{
public:
    string fname;
    string lname;
    string address;
    int a_id;


    opjoin(string a,string b,string c,int id)
    {
        fname=a;
        lname=b;
        address=c;
        a_id=id;
    }

    opjoin operator +(opjoin name)
    {
        opjoin temp("","","",0);
        temp.fname=name.fname;
        temp.lname=lname+name.lname;
        temp.address=address;
        temp.a_id=name.a_id;
        return temp;
    }
};


int main()
{
    opjoin name("veer","angadi","ilkal",1111);
    opjoin name2("rakshita","hegde","Hubli",2222);
    opjoin t("","","",0);
    t=name+name2;
    cout<<t.fname<<"\n"<<t.lname<<"\n"<<t.a_id<<"\n"<<t.address;
    return 0;
}
