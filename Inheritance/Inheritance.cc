#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base
{
      protected: int x;
public:    base(int a)
    {
        cout<<"base";
        x=a;

    };
    void display()
    {
        cout<<x;
    }
};
class derived : public base
{
    int y;
    public : derived( int b ) : base(5)
    {
        cout<<"derived";
        y=b;
        cout<<x<<y;
    };
};
class derived1: public derived
{

};

main()
{
   derived ob(3);

}
