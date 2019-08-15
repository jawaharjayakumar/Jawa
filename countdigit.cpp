#include<iostream>
using namespace std;
int main()
{
    int N,a=0;
    cin>>N;
    while(N>0)
    {
        N=N/10;
        a++;
    }
    cout<<a;
    cout<<endl;
}
