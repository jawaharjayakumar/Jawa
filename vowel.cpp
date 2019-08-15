#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowel";
    }
    else if(ch=='b'||ch=='c'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
    {
        cout<<"Consonant";
    }
    else
    {
       cout<<"invalid";
    }

}


