#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
char plane[7][5] = {{'1','A','B','C','D'},{'2','A','B','C','D'},{'3','A','B','C','D'},{'4','A','B','C','D'},{'5','A','B','C','D'},{'6','A','B','C','D'},{'7','A','B','C','D'}}; // define original plane

char end[7][5] = {{'1','X','X','X','X'},{'2','X','X','X','X'},{'3','X','X','X','X'},{'4','X','X','X','X'},{'5','X','X','X','X'},{'6','X','X','X','X'},{'7','X','X','X','X'}}; // define booked

for(int i = 0; i < 7; i ++)
{
	for(int j = 0; j < 5; j++)
	{
                cout << plane[i][j] << " "; // print original plane
	}
	cout << endl;
}

int row = 0;
int col = 0, ans = 'n';
bool done = false;

while(!done)
{
	row = 0;
	col = 0;
	ans = 'h';
	done = false;
	do
	{
	cout << "Enter the row you would like\n";
        cin >> row;
	}while(row > 8 && row < 1); //ensure proper input
	do{
	cout << "Enter the column you would like (1 = A) (2 = B) (3 = C) (4 = D)\n";
	cin >>col;
	}while(col > 5 && col < 1); // ensure proper input
	
	if(plane[row][col] != 'X')
		plane[row-1][col] = 'X'; // if not booked, book
	else
		cout <<"That seat is taken\n"; // else it is taken
	for(int i = 0; i < 7; i ++)
	{
        	for(int j = 0; j < 5; j++)
        	{
                	cout << plane[i][j] << " "; // print plane with newly booked
        	}
       		cout << endl;
	}
	if(plane == end) // compare plane and booked for verification
	{
		cout << "All seats are booked\nExiting now\n";
		done = true;
		break; // if booked exit
	}

	cout << "Have you completed your bookings? (y/n)\n";
	cin >> ans;
	if(ans == 'Y' || ans == 'y') // prompt user to input whether it's completed
	{	
		done = true;
		break;
	}
	else
		done = false;
break; 
break;


}


return 0;
}
