#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream instream;


	char word=' ', next = ' ';	
	int commas = 0;

	instream.open("input2.txt");
	while(commas <3)
	{
		while(! instream.eof()) //Checks for end of file
		{
			instream.get(next); // Cycles through every character
		
			if(next == ',') // Check for comma
			{
				instream.get(next);	// cycle past space
				instream.get(next);
				
				while(next != ' ' && next != '\n') // check for end of word
				{
				
					cout.put(next); // output character
					instream.get(next); 
				
				}
				cout << endl; //newline afterwords
				commas++;
			}
		}
	
	}
	instream.close(); // close file

return 0;
}
