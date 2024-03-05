#include "question4.h"
#include<iostream>
#include<string>
using std::string;
using std::swap;
using std::cout;
using std::cin;

int main()
{
int Input = 0;
cout<<"Enter an Inter to Convert to Hexadecimal"<<'\n';
cin>>Input;

cout<<dec_to_hex (Input);

    return 0;
}