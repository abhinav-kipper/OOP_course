#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char str[300];
    fstream out("fstream");
    out<<"Hello Ashok\nThis is Abhinav\nAnd this is \n EOF.";
    out.close();
    ifstream in("fstream");
    //  in.ignore(12,'0');

             cout<<in.tellg();
    while(in)
    {
        in.getline(str,255);
         cout<<in.gcount();
        cout<<str<<endl;
    }

    in.close();



}

