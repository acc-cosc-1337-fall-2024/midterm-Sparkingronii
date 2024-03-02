#include "question2.h"
#include<iostream>
using std::cin; using std::cout;

int main() 
{
	while (true)
	{
		int Option;
		cout<<"MENU"<<"\n";
		cout<<"Option 1-Get Sales Commission"<<"\n";
		cout<<"Option 2-Exit"<<"\n";

		cout<<"Choose an Option: ";
		cin>>Option;
		cout<<Option<<"\n";

		if (Option == 1)
		{
	
			auto Sale = 0;
            auto Commission_Amount = 0;

			cout<<"Enter a Sales Value: ";
			cin>>Sale;

			Commission_Amount = get_sales_commission(Sale);

			cout<<Commission_Amount<<"\n";

			//return 0;
		}
	
		
		else if (Option == 2)
		{
			break;
		}
	}
}
