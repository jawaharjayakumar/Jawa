#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    for( int i=1;i<=N;i++)
    {
        sum =i*(i+1)/2;
    }
    cout<<sum;
    return 0;
}
