#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct  status
{
    char name[80];
    double balance;
    unsigned long account_num;
}a;
int main()
{
    struct status acc;
    strcpy(acc.name,"Abhinav Mudgal");
    acc.balance=1233.00;
    acc.account_num=345677;

    //Write data
    ofstream outbal ("readwritestruct",ios::binary);
    if(!outbal)
    {
        cout<<"cant open";
        return 1;
    }
    outbal.write((char*)&acc,sizeof(struct status));
    outbal.close();
    //read
    ifstream inbal("readwritestruct",ios::binary);
    if(!inbal)
    {
        cout<<"cant open";
        return 1;
    }
    cout<<inbal.tellg();
    inbal.read((char*)&a,sizeof(struct status));
    cout<<a.name<<endl;
    cout<<"Account # "<<a.account_num;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<endl<<"Balancce:$"<<a.balance;
    cout<<inbal.tellg();
    inbal.close();
    return 0;

}
