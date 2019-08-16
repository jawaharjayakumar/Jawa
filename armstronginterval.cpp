#include <iostream>
using namespace std;
int main()
{
int N,r,K,sum,num;
cin>>N>>K;
for(int i=N;i<=K;i++)
    {
        sum=0;
        num=i;
    for(;num>0;num/=10)
     {
        r=num%10;
        sum=sum+(r*r*r);
     }
     if(sum==i)
        cout<<i<<" ";
    }
}

