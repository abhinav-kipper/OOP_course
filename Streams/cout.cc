#include<iostream>
using namespace std;
main()
{
    int n=10;
    cout<<n;
    cout.setf(ios::hex);
    cout<<n;
    n=ios::showbase;
    cout<<n;
    cout.width(10);
    cout<<n;
}
