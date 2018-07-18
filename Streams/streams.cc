#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream mystream("stream.txt",ios :: out | ios::in | ios ::binary | ios::ate);
    if (!mystream)
    {
        cout<<"Cant open file";
        return 1;
    }

    /*mystream<<endl<<"This is "<<2<<endl;
    mystream<<"Stream file using"<<endl;
    mystream<<"Insertion << operator"<<endl;*/
    char ch;
    while (mystream)
    {
        mystream.get(ch);
        if (mystream) cout<<ch;
    }


    mystream.close();
}
