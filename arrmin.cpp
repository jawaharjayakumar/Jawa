
#include<iostream>
using namespace std;
int main()
{
    int N,A[50];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<N;i++)
    {
        if(A[0]>A[i])
        A[0]=A[i];
    }
    cout<<A[0];

 return 0;

}

