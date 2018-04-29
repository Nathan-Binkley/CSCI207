#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int rollDice();

int main()
{
	/*
	double num;
	srand(time(0));
	
	for(int i = 0; i < 10; i++)
		{
			num = rand() % 5 ;
			cout << num << endl;	
		}
	*/
	bool done = false;
	int sum, total1 = 0, total2 = 0, rounds, wins1 = 0, wins2 = 0;
	srand(time(0));
	
	cout << "How many rounds do you want to play?\n";
	cin >> rounds;
	rollDice()
	return 0;	
	
}


void rollDice()
{
	int sum = 0, total = 0;
	int die1, die2;
	bool done = false;
	while(!done)
	{
		die1 = (rand() % 6) + 1;
		die2 = (rand() % 6) + 1;
		sum = die1 + die2;
		total += sum;
		if(sum == 7 || sum == 11)
			done = true;
	}
	for(int i = 0; i < rounds; i++)
        {

                cout << "Player1 press enter to roll dice\n";
                cin.ignore();
                total1 = rollDice();
                cout << "Player1 role has ended. They scored: " << total1 << endl << endl;

                cout << "Player2 press enter to roll dice\n";
                cin.ignore();
                total2 = rollDice();
                cout << "Player2 role has ended. They scored: " << total2 << endl << endl;

                cout << "Player1 scored: " << total1 << " and player2 scored: " << total2 << endl;


                if(total1 > total2)
                {
                        cout << "Player1 is the winner\n";
                        wins1 ++;
                }
                else if(total1 < total2)
                {
                        cout << "Player2 is the winner\n";
                        wins2 ++;
                }
                else if (total1 == total2)
                        cout << "It was a draw\n";
                else
                        cout << "Error 404. Winner not found\n";

                cout << "Player1 has won " << wins1 << " rounds while Player2 has won " << wins2 << " rounds\n";
        }

}
