#include<iostream>
using namespace std;
class base
{
    protected: double a,b;
    public: void getdata()
    {
        cin>>a>>b;
    }
    virtual void displayarea()=0;
    };

class triangle:public base
{
    void displayarea()
    {
        cout<<(0.5*a*b);
    }
};

class rectangle:public base
{
    void displayarea()
    {
        cout<<a*b;
    }
};

main()
{
    base *p;
    triangle t;
    rectangle r;
    p=&t;
    p->getdata();
    p->displayarea();
    p=&r;
    p->getdata();
    p->displayarea();
}
