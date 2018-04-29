#include <iostream>
using namespace std;

//Nathan Binkley
//CSCI 207 -- 001
int main()
{

	// The purpose of this program is to find the correct pythagorean theorem value for a triangle with the given inputs of leg1 and leg2. The output is the squared version of the hypotenuse

	double leg1,leg2,hyp_sq,leg1_sq,leg2_sq; //initialize variables

	cout << "Please type the value of leg 1, then press enter. Then inter the value of leg 2, then press enter.\n";// Prompt user to enter values
	cin >> leg1 >> leg2; // Store values as the variables

	leg1_sq = leg1 * leg1; // Assign the value of leg1 squared (a^2)

	leg2_sq = leg2 * leg2; // Assign value of leg2 squared (b^2)

	hyp_sq = leg2_sq * leg1_sq; // assign the hyp_sq (c^2) value based on the formula (a^2 + b^2 = c^2)
	cout << "The value of side 1 is " << leg1 << endl;// Output origional leg 1
	cout << "The value of side 2 is " << leg2 << endl;// Output origonal leg 2
	cout << "The value of the squared hypotenuse value is " << hyp_sq << endl; // Output results
//HELLO FROM THE OTHER SIDEEEEEEEE
	return 0;
}
