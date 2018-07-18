#include<iostream>
using namespace std;
template <class X> void bubble(X *arr,int length)
{
    int i,j;
    X temp;
    for(i=0;i<length-1;i++)
        for(j=i+1;j<length;j++)
        {
            if (arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
}
main()
{
    int a[6]={3,4,7,6,-8,12};
    float b[8]={1.0,2.0,3.4,1.2,0.2,0.1,1.3,-9.0};
    bubble(a,6);
    bubble(b,8);
    for (int i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for (int i=0;i<8;i++)
        cout<<b[i]<<" ";
}
