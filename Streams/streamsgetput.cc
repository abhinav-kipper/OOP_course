#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream mystream("stream.txt",ios::in | ios ::binary );
    if (!mystream)
    {
        cout<<"Cant open file";
        return 1;
    }

    /*mystream<<endl<<"This is "<<2<<endl;
    mystream<<"Stream file using"<<endl;
    mystream<<"Insertion << operator"<<endl;*/
   cout<<mystream.tellg()<<"    ";
    char ch;
    while (mystream)
    {

        mystream.get(ch);
        if (mystream) cout<<ch;

    }
    cout<<mystream.tellg()<<"   fsd ";
    cout<<endl;
    char str[500];
  mystream.seekg(0,ios::beg);
  cout<<mystream.tellg();
    while(mystream)
    {

        mystream.get(str,500);
        mystream.seekg(1,ios::cur);
        if(mystream)
            cout<<str<<endl;
    }
    mystream.close();
}
