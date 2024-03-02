#include "question1.h"
#include<iostream>
#include<cmath>
using std::cin; using std::cout;

int main()
{
while(true)
	{
		int Option;
		cout<<"MENU"<<"\n";
		cout<<"Option 1-Find Prime Numbers"<<"\n";
		cout<<"Option 2-Exit"<<"\n";

		cout<<"Choose an Option: ";
		cin>>Option;
		cout<<Option<<"\n";

		if (Option == 1)
		{
	
			auto Number = 0;
            auto Prime_Numbers = 0;
			

			cout<<"Enter Number Between 1 and 60: ";
			cin>>Number;
            
                     
            
			Prime_Numbers = get_primes(Number);

			cout<<Prime_Numbers<<"\n";
           

			//return 0;
		}
	
		
		else if (Option == 2)
		{
			break;
		}
	}
}