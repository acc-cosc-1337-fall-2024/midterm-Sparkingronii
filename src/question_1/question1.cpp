#include "question1.h"
#include<iostream>
//#include<cmath>
using std::cin; using std::cout;

bool test_config()
{
    return true;
}
bool is_prime(int num)
{
  if(num <= 1) 
  return false;

  for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
  
  return true;
}
int get_primes(int num)
{
    //int prime_numbers = 0;
    for(int i =1; i <=num; i++)
        if(is_prime(i))
        {
            cout<<i<<" ";
        }
return num;
}

