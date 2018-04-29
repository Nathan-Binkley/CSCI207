#include <iostream>
using namespace std;

void cost(double dp, double price);
double morgage(double ilb);

int main()
{
	bool done = false;
	char answer;
	double price, dp;
	while(!done)
	{	cout << "please enter the total price\n";
		cin >> price;
		cout << "Please enter down payment \n";
		cin >> dp;
		cost(dp, price);
		cout << "Would you like to do this again? (y/n)\n";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
			done = false;
		else
			done = true;		
	}

return 0;
}

void cost(double dp, double price)
{
	double last, ts, ilb, amc; // final cost, tax savings, initial loan balance, and anual morgage cost
	ilb = price - dp;
	ts = .35 * (.06 * ilb);
	amc = morgage(ilb);

	last = amc - ts;

	cout << last;
}

double morgage(double ilb)
{	double it;
	it = (.03 * ilb) + (.06 * ilb);
	return it;
}
