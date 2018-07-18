#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 double fnum[4]={9.7,-3.4,2.2,5.7} ;
 int i;
 ofstream out ("numbers",ios::out | ios::binary);
 if(!out)
 {
     cout<<"Cannotopenfile";
     return 1;
 }
 out.write((char *) &fnum,sizeof fnum);
 out.close();
 for(i=0;i<4;i++)
 {
     fnum[i]=0.0;
 }
 for (i=0;i<4;i++)
    cout<<fnum[i]<<" ";
 ifstream in("numbers",ios::binary);
 in.read((char *) &fnum,sizeof fnum);

 cout<<in.gcount()<<"Bytes read \n";
 for (i=0;i<4;i++)
    cout<<fnum[i]<<" ";
}
