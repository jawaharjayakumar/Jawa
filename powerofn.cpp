#include<iostream>
using namespace std;
int main()
{
    int N,K,s=1;
    cin>>N>>K;
    for(int i=K;i>0;i--)
    {
        s=s*N;
    }
    cout<<s;
    cout<<endl;

}
