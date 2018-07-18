#include<iostream>
using namespace std;
#include<fstream>
 int main()
{
    while (1)
    try
    {
        double a,b;
        cin>>a>>b;
        if(b==0) throw 10;
        double c=a/b;
        cout<<endl<<c<<endl;
        cout<<"NEW:"<<endl;
        int *p;
        p=new int[10];
        for (int i=0;i<10;i++)
            cin>>p[i];
        cout<<p[0]<<p[1]<<p[2]<<p[3];
    }
    catch(int val)
    {
        cout<<val<<" is returned cant divide by zero. EXIT";
        return 0;
    }
    catch(bad_alloc xa)
    {
        cout<<"Memory not allocated";
        return 0;
    }
}
