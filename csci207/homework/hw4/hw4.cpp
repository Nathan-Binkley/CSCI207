#include <iostream>
#include <cmath>
using namespace std;

bool SquareNumber(int num);
bool IsPrime(int num);

int main()
{
	int number;
	
	cout << "Input any integer\n";
	cin >> number;
	if(SquareNumber(number))
	{
		cout << "This is a perfect square\n";
	}
	if(IsPrime(number))
	{
		cout << "This is a prime number\n";
	}
	

	return 0;
}

bool SquareNumber(int num)
{
	int square;
	for(int i = 0; i < num; i++)
	{
		square = i * i;
		if(square == num)
			return true;
		else if (square > num)
			return false;	
	}
}

bool IsPrime(int num)
{
	
	if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 ==0)
		return false;
	
	else
		return true;
}
