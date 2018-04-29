#include <iostream>
using namespace std;

int main()
{
	//int year = 1998;  Assign your birth year
	//year = year+3;
	//cout<<"Insert your birth year (YYYY) then hit enter"<<endl;
	//cin>>year;
	//cout<<"The value of year = " << year << endl;
	const type TOBACCO_TEST = 1996;
	int year;
	
	cout<<"Insert your birth year, then hit enter\n";
	cin>>year;	

	if((year<=(2017-21))||(TOBACCO_TEST<=(2017-18)))
	{
		cout<<"You are old enough to purchase tobacco or alcohol!\n";
		cout<<"We aren't sure what you can purchase yet. Stay tuned.\n";
	}
	else
		cout<<"Either you are not old enough to purchase tobacco or alcohol. Sorry!\n";	
	/*
	int counter = 5;

	do
	{	cout << "Counter Value = " << counter << endl;
		//counter--;
	}while(counter>0);
	cout<<"Made it to counter initializiation correctly!!\n";
	*/
	return 0;
}
