#include<iostream>
using namespace std;
int main()
{
    int N,K,flag;
    cin>>N>>K;
    for(int i=N+1;i<K;++i)
    {
        flag=0;
    for(int j=2;j<=i/2;++j)
        {
        if(i%j==0)
          {
        flag=1;
        break;
          }
        }
        if(flag==0)
            cout<<i<<" ";
    }
    return 0;
}
