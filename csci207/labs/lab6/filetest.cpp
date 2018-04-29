#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream input_stream;
	ofstream output_stream;

	int num1, num2, num3, num4;
	input_stream.open("input.txt");
	input_stream >> num1 >> num2 >> num3 >> num4;
	input_stream.close();
	
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	
	output_stream.open("output.txt");
	output_stream << "This is my new output file containing the following: " << num1 << " " << num2 << " " << num3 << " " << endl << num4;
	output_stream.close();


return 0;
}	
