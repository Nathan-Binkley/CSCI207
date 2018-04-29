#include <iostream>
using namespace std;

void lose(){ // Define what would happen to a loss
	cout << "Player2 is the winner\n";
}
void win() { // Define what would happen to a win
	cout << "Player1 is the winner\n";
}
void tie() { // Define what would happen to a tie
	cout << "It was a tie\n";
}


int main()
{
	char player1, player2, answer;
	bool playing = true;
	
	while(playing)
	{
	
	cout << "Player1, type R for rock, p for paper, s for scissors\n";
	cin >>  player1;	
	cout << "Player2, please do the same\n";
	cin >> player2;	
	switch(player1) //Switch to go through all possible outcomes
	{
	case 'r':	
			if(player2 == 's' || player2 == 'S')
				win();
			else if (player2 == 'p' || player2 == 'P')
				lose();
			else
				tie();
			break;

	case 'R':	
			if(player2 == 's' || player2 == 'S')
                                win();
                        else if (player2 == 'p' || player2 == 'P')
                                lose();
                        else
                                tie();
                        break;
	
	case 'p': 	
			if(player2 == 'r' || player2 == 'R')
                                win();
                        else if (player2 == 'S' || player2 == 's')
                                lose();
                        else
                                tie();
                        break;

	case 'P':       
			if(player2 == 'r' || player2 == 'R')
                                win();
                        else if (player2 == 'S' || player2 == 's')
                                lose();
                        else
                                tie();
                        break;
	
	case 's':	
			if(player2 == 'p' || player2 == 'P')
                                win();
                        else if (player2 == 'r' || player2 == 'R')
                                lose();
                        else
                                tie();
                        break;

	case 'S':	
			if(player2 == 'p' || player2 == 'P')
                                win();
                        else if (player2 == 'r' || player2 == 'R')
                                lose();
                        else
                                tie();
                        break;

			 
	default:	
			cout << "Invalid input\n";


	}
	cout << "Would you like to play again?(y/n)\n";
	cin >> answer;
	if((answer=='y')||(answer=='Y'))
		playing=true;
	else
		playing=false;
		
	}

	return 0;
}
