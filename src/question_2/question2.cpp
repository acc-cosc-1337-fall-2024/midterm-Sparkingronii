#include "question2.h"
#include<iostream>

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    int commission = 0;
      if(sales >= 1500)
    {
        commission = sales * .08;
    }
    else if(sales >= 1000 && sales <= 1499)
    {
        commission = sales * .07;
    }
    else if(sales >= 500 && sales <= 999)
    {
        commission = sales * .06;
    }
    else if(sales >= 0 && sales <= 499)
    {
        commission = sales * .05;
    }

    return commission;
}