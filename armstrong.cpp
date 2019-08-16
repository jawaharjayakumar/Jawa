#include <iostream>
using namespace std;
int main()
{
int N,r,sum=0,temp;
cin>>N;
temp=N;
while(N>0)
{
r=N%10;
sum=sum+(r*r*r);
N=N/10;
}
if(temp==sum)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
return 0;
}
