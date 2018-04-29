#include <iostream>
using namespace std;

void input(int& time_hour, int& time_minute, char& time_AP);
void conversion(int& time_hour, int& time_minute, char& time_AP);
void output(int& time_hour, int& time_minute, char& time_AP);

int main()
{
	bool done = false;
	int hour = 0, minute = 0;
	char AP, answer;
	while(!done)
	{
		input(hour, minute, AP);
		conversion(hour, minute, AP);
		output(hour, minute, AP);
		cout << "Would you like to try again? " << endl;
		cin >> answer;
		if(answer == 'y' || answer == 'Y')
			done = false;
		else
			done = true;
	}
	return 0;
}

void input(int& time_hour, int& time_minute, char& time_AP)
{	
	cout << "input the hours\n";
	cin >> time_hour;
	cout << "Input the minutes\n";
	cin >> time_minute;
	cout << "Input A if AM or P if PM\n";
	cin >> time_AP;
}

void conversion(int& time_hour, int& time_minute, char& time_AP)
{
	if(time_AP == 'p' || time_AP == 'P')
		if(time_hour == 0)
			time_hour += 12;
		else
			time_hour -=12;
	if((time_AP == 'a' || time_AP == 'A') && time_hour == 0)
		time_hour += 12;
}

void output(int& time_hour, int& time_minute, char& time_AP)
{
	cout << "The time in standard time is " << time_hour << ":" << time_minute;
	if(time_AP == 'p' || time_AP == 'P')
		cout << "PM\n";
	else 
		cout << "AM\n";
}
