#include<bits/stdc++.h>
using namespace std;
int func(int num)
{
    int count =0;
    while(num)
    {
        count++;
        num>>=1;
    }
    return count;
}
int main()
{
    int a=435;
    func(a);

}
