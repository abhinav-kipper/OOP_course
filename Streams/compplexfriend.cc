#include<iostream>
#include<fstream>
using namespace std;
class complex{
int real,imag;
public: complex(int a,int b)
{
    real=a;
    imag=b;
}
complex()
{

}
complex operator +(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
complex operator +(int c)
{
    complex temp;
    temp.real=real+c;
    temp.imag=imag;
    return temp;
}
friend complex operator +(int a ,complex c);
friend ostream& operator << (ostream& stream,complex c);
void display()
{
    cout<<real<<" "<<imag<<endl;
}
};

ostream & mymanip(ostream & stream)
{
    stream.setf(ios :: hex ,ios::basefield);
    return stream;
}


ostream & operator <<(ostream& stream,complex c)
{
    stream<<c.real<<" "<<c.imag<<endl;
    return stream;
}
complex operator +(int a,complex c)
{
     complex temp;
    temp.real=c.real+a;
    temp.imag=c.imag;
    return temp;
}
main()
{
    fstream in("complex.txt",ios :: out);

    complex c1(10,2),c2(2,3),c3;
    cout<<c1;
    c3=c1+c2;
    c3=5+c1;
     in<<c3;
    cout<<mymanip<<c3;
    cout<<c1;
    }
