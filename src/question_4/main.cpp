#include "question4.h"
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;

int main()
{
int Input = 0;
cout<<"Enter an Inter to Convert to Hexadecimal"<<'\n';
cin>>Input;
string Hexadecimal = dec_to_hex (Input);
cout<<Hexadecimal<<'\n';

    return 0;
}