#include<iostream>
using namespace std;
class base{
protected :   int x;
    public: base(int a)
    {
        x=a;
    }
   virtual void fn()=0;

};
class derived1 :public base{
protected:        int y;
        public: derived1(int a,int b) : base(a)
        {
            x=a;
            y=b;
        }
        void fn()
        {
            cout<<"derived1";
        }
};
class derived2:public derived1{
        int z;
        public: derived2(int a,int b,int c):derived1(a,b)
        {
            x=a;
            y=b;
            z=c;
        }
 void fn()
        {
         cout<<"Derived2";
        }
};

int main()
{
    base *p;


    derived1 q(2,3);
    p=&q;
    p->fn();
    derived2 d(2,3,4);
    p=&d;
    p->fn();

}
