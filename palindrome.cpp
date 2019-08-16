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
 sum=(sum*10)+r;
 N=N/10;
}
if(temp==sum)
cout<<"yes";
else
cout<<"no";
  return 0;
}
