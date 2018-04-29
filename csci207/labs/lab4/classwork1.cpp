#include <iostream>
using namespace std;

void mpg(double miles, double liters);

int main()
{
	bool done = false;
	char answer;
	double liters, miles;
	
	while(!done)
	{
		cout << "Enter the miles you traveled\n";
		cin >> miles;
		cout << "Enter the liters you used\n";
		cin >> liters;
		
		mpg(miles, liters);
		cout << "Would you like to try again? (y/n)\n";
		cin >> answer;
		if(answer == 'y' || answer == 'y')
			done = false;
		else
			done = true;
	}
	return 0;
}

void mpg(double miles, double liters)
{	
	double gal;
	gal = liters * .264179;
	cout << miles/gal << endl;
}
