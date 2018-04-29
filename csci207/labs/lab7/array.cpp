#include <iostream>
#include <fstream>
using namespace std;

void func(int number[][12]);


int main()
{
	const int MAX_SIZE = 12;
	int temp[2][12];

	int next = 0;
	char nextSymbol = ' ';

	ifstream instream;

	//temp[0] = 14;
	//temp[1] = 22;
	//temp[2] = 40;
	//cout << temp[1] << endl;

	//for(int i = 0; i < 3; i++)
	//{	
	//	cout<< temp[i] << endl;
	//}


	//cout << temp << endl;
	
	instream.open("DC.txt");
	
	/*
	for(int i = 0; i < MAX_SIZE; i++)
	{
		instream >> next;
		temp[i] = next;
	  	cout << temp[i] << endl;

	}
 	*/
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			instream >> temp[i][j];	
			cout << temp[i][j] << endl;
		}
		cout << endl;
	}
	
	func(temp);

	cout << endl << endl;	
        for(int i = 0; i < 2; i++)
        {
		for(int j = 0; j < 12; j++)
		{              	
			cout << temp[i][j] << endl;
        
		}
		cout << endl;
	}


	instream.close();
		
	//temp[12] = 111;
	//cout << "value of temp[12] = " << temp[12] << endl;
	
return 0;
}

void func(int number[][12]){
	for(int i = 0; i < 2; i++)
        {
		for(int j = 0; j < 12; j++)
		{
                		number[i][j] = number[i][j]+2;
		}
        }


}
