#include"question4.h"
#include<iostream>
#include<string>
using std::string;
using std::swap;


//
bool test_config()
{
    return true;
}

string dec_to_hex (int num)
{
    string ans = "";
while(num != 0)
    {
        int rem = 0;
        char ch;

        rem = num % 16;

        if (rem < 10) 
        {
            ch = rem + 48;
        }
        else 
        {
            ch = rem + 55;
        }

        ans += ch;
        num = num / 16;
    }

    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    return ans;

}