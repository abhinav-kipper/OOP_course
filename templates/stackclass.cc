#include<iostream>
using namespace std;
const int SIZE=10;

template <class stacktype> class stack
{
    stacktype stck[SIZE];
    int top;
public:
    stack()
    {top=-1;}
    void push(stacktype ob);

    stacktype pop();
};

template <class stacktype> void stack<stacktype>::push(stacktype ob)
{
    if (top==SIZE)
    {
        cout<<"full";
        return;
    }
    stck[++top]=ob;
}
template <class stacktype> stacktype stack<stacktype>::pop()
{
    if (top==-1)
    {
        cout<<"Empty";
        return 0;
    }
    return stck[top--];
}

main()
{
    stack<char> s1,s2;
    stack<int> d1,d2;
    cout<<"hello";
    s1.push('a');
    cout<<"hellll";
    s2.push('b');

    cout<<"hellll";
    s1.push('c');

    cout<<"hellgkhjll";
    s2.push('d');
    s1.push('e');

    cout<<"hellll";
    for (int i=0;i<2;i++)
    {
        cout<<s1.pop();
    }
}
