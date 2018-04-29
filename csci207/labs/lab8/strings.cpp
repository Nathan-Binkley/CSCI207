#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
char greeting[] = "Hello. How are you?";
char greeting2[30]= "Hey! What's up?";

cout << greeting << endl;
cout << greeting2 << endl;

if(strcmp(greeting,greeting2) == 0)
	cout << "The same \n";
else if (strcmp(greeting,greeting2) != 0)
	cout << "Not the same \n";

strcpy(greeting2, greeting);

cout << greeting << endl;
cout << greeting2 << endl;

if(strcmp(greeting,greeting2) == 0)
	cout<< "The same \n";
else if (strcmp(greeting,greeting2) != 0)
	cout << "Not the same \n";

/*
strcpy(greeting,"Hola mi amiga!");


if(strcmp(greeting,greeting2) == 0)
        cout<< "The same \n";
else if (strcmp(greeting,greeting2) != 0)
        cout << "Not the same \n";
*/

char greeting3[10];

cout << "Type the word 'Hey' then press enter" << endl;

cin.get(greeting3, 10);

cout << "This is what you typed " << greeting3 << endl;

char cash[] = "200";

int cash_int;

cash_int = atoi(cash);
cout << cash_int;

return 0;
}
