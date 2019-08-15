#include<iostream>
using namespace std;
int main()
{
    int arr[10],N,K,sum=0;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<K;i++)
    {
       sum+=arr[i];
    }
    cout<<sum;
    cout<<endl;
}
