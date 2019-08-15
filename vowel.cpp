#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"Vowel";
    }
    else if(c=='b'||c=='c'||c=='d'||c=='f'||c=='g'||c=='h'||c=='j'||c=='k'||c=='l'||c=='m'||c=='n'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='v'||c=='w'||c=='x'||c=='y'||c=='z')
    {
        cout<<"Consonant";
    }
    else
    {
       cout<<"invalid";
    }

}

