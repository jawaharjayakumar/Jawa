#include<iostream>
using namespace std;
int main()
{
    int N,flag=0;
    cin>>N;
    for(int i=2;i<=N/2;i++)
    {
        if(N%i==0)
    {
        cout<<"no"<<endl;
        flag=1;
    }
    }
    if(flag==0)
    {
        cout<<"yes"<<endl;
    }
}
