#include<iostream>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    for(int i=N+1;i<K;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }

    }
}

