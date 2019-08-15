#include<iostream>
using namespace std;
int main()
{
    int N,a=0;
    cin>>N;
    if(N<0)
    {
     N=N*-1;
    }
    else if(N==0)
    {
      N=1;
    }
    while(N>0)
    {
        N=N/10;
        a++;
    }
    cout<<a;
    cout<<endl;
}
