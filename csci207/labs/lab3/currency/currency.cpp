#include <iostream>
#include <typeinfo>
#include <cmath>
using namespace std;

int main()
{
	const double QUART_VALUE=0.25, PEN_VALUE=0.01, NICK_VALUE=0.05, DIME_VALUE=0.10;
	int quarters, nickels, dimes, pennies, change;
	double money;
	bool done = false;
	
	while(!done)
	{
		do // prompt user input
		{
			cout << "Insert a valid USD currency type (1.25) or 0.00 to exit\n";
			cin >> money;
		}while(typeid(money) == typeid(char)); // If it's not a number, don't accept
		if(money == 0.00)
			done = true;		

		change = money * 100; // change to a usable input
		
		cout << "\nThe change in coins is ";
		if(change/25 >=1) // Check if output is necessary
			cout << change/25 << " quarters, ";
		change = change%25;
		if(change/10 >=1) // Check if output is necessary
			cout << change/10 << " dimes, ";
		change = change%10;
		if(change/5 >=1) // Check if output is necessary
			cout << change/5 << " nickels, ";
		change = change%5;
		if(change/1 >=1) // Check if output is necessary
			cout << change/1 << " pennies.";
		
	}
	return 0;
}
