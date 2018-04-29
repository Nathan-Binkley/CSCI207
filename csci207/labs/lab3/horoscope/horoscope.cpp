#include <iostream>
using namespace std;

int main()
{
	int month, day, i;
	for (i = 1; i <= 3; i++)
	{

		do
		{
			cout << "Enter your birth day, press enter, then your birth month, then press enter (3 12)\n";
			cin >> day >> month; 
		
		}while ((month < 1  || month > 12) || (day < 1 || day > 31));
			
		if((month == 3 && day > 20)&& (month == 4 && day<20)) // Aries
                {
                        cout << "Your sign is Aries (March 21-April 19)\n";
                        if((day < 24 && day > 16)&& month == 3)
                                cout << "Your birthday is on a cusp between Pisces and Aries\n";
                        if((day > 15 && day < 23) && month ==4)
                                cout << "Your birthday is on a cusp between Taurus and Aries\n";
                        cout << "Your horoscope is 'You will have a splended day. But beware the water puddle'\n";

                }
		if((month ==4 && day > 19) || (month == 5 && day<21)) // Taurus
		{	
			cout << "Your sign is Taurus (April 20 - May 20)\n";
			if((day < 24 && day >16) && month == 5)
				cout << "Your birthday is on a cusp between Taurus and Gemini\n";
			if((day > 16 && day < 24) && month ==4)
				cout << "Your birthday is on a cusp between Taurus and Aries\n";
			cout << "Your horoscope is 'A tide moves along the horizon for you to find something new'\n";
			
		}
		if((month ==5 && day > 20) || (month == 6 && day<21)) // Gemini
                {
                        cout << "Your sign is Gemini (May 21 - June 20)\n";
                        if((day < 24 && day > 16) && month == 6)
                                cout << "Your birthday is on a cusp between Gemini and Cancer\n";
                        if((day > 16 && day < 24) && month ==5)
                                cout << "Your birthday is on a cusp between Gemini and Taurus\n";
                        cout << "Your horoscope is 'Running helps clear the body and soul of troubles'\n";

                }
		if((month ==6 && day > 20) || (month == 7 && day<23)) // Cancer
                {
                        cout << "Your sign is Cancer (June 21 - July 22)\n";
                        if((day < 26 && day > 18) && month == 7)
                                cout << "Your birthday is on a cusp between Cancer and Leo\n";
                        if((day > 16 && day < 24) && month ==6)
                                cout << "Your birthday is on a cusp between Cancer and Gemini\n";
                        cout << "Your horoscope is 'Don't go on the internet today'\n";

                }
		if((month ==7 && day > 22) || (month == 8 && day<23)) // Leo
                {
                        cout << "Your sign is Leo (July 23 - August 22)\n";
                        if((day < 26 && day > 18) && month == 8)
                                cout << "Your birthday is on a cusp between Leo and Virgo\n";
                        if((day > 18 && day < 26) && month ==7)
                                cout << "Your birthday is on a cusp between Leo and Cancer\n";
                        cout << "Your horoscope is 'Life will find a way and so will you'\n";

                }
		if((month ==8 && day > 22) || (month == 9 && day<23)) // Virgo
                {
                        cout << "Your sign is Virgo (August 23 - September 22)\n";
                        if((day < 26 && day > 18) && month == 9)
                                cout << "Your birthday is on a cusp between Virgo and Libra\n";
                        if((day > 18 && day < 26) && month ==8)
                                cout << "Your birthday is on a cusp between Virgo and Leo\n";
                        cout << "Your horoscope is 'Beware the twin under the light'\n";

                }
		if((month ==9 && day > 22) || (month == 10 && day<23)) // Libra
                {
                        cout << "Your sign is Libra (September 23 - October 22)\n";
                        if((day < 26 && day >18) && month == 10)
                                cout << "Your birthday is on a cusp between Libra and Scorpio\n";
                        if((day > 18 && day < 26) && month == 9)
                                cout << "Your birthday is on a cusp between Libra and Virgo\n";
                        cout << "Your horoscope is 'You will face great prosperity today'\n";
	        }
		if((month ==10 && day > 22) || (month == 11 && day<22)) // Scorpio
                {
                        cout << "Your sign is Scorpio (October 23 - November 21)\n";
                        if((day < 24 && day > 17) && month == 11)
                                cout << "Your birthday is on a cusp between Scorpio and Sagittarius\n";
                        if((day > 18 && day < 26) && month == 10)
                                cout << "Your birthday is on a cusp between Scorpio and Libra\n";
                        cout << "Your horoscope is 'Nothing can stop you'\n";

                }
		if((month ==11 && day > 21) || (month == 12 && day<22)) // Sagittarius
                {
                        cout << "Your sign is Sagittarius (November 22 - Decmeber 21)\n";
                        if((day < 25 && day > 17) && month == 12)
                                cout << "Your birthday is on a cusp between Sagittarius and Capricorn\n";
                        if((day > 18 && day < 26) && month == 11)
                                cout << "Your birthday is on a cusp between Sagittarius and Scorpio\n";
                        cout << "Your horoscope is 'Life will find a way'\n";
                }
		if((month ==12 && day > 21) || (month == 1 && day<20)) // Capricorn
                {
                        cout << "Your sign is Aries (Decmeber 22 - January 19)\n";
                        if(day < 23 && month == 1)
                                cout << "Your birthday is on a cusp between Capricorn and Aquarius\n";
                        if(day >18 && month == 12)
                                cout << "Your birthday is on a cusp between Capricorn and Sagittarius\n";
                        cout << "Your horoscope is 'Ignore the door'\n";

                }
		if((month == 1 && day > 19) || (month == 2 && day<19)) // Aquarius
                {
                        cout << "Your sign is Aquarius (January 20 - February 18)\n";
                        if((day < 23 && day > 15) && month == 1)
                                cout << "Your birthday is on a cusp between Aquarius and Capricorn \n";
                        if((day > 14 && day < 22) && month ==2)
                                cout << "Your birthday is on a cusp between Aqiarois and Pisces\n";
                        cout << "Your horoscope is 'You will have a splended day. But beware the water puddle'\n";

                }
		if((month ==2 && day > 18) || (month == 3 && day<21)) // Pisces
                {
                        cout << "Your sign is Pisces (February 19 - March 20)\n";
                        if((day < 22 && day > 14) && month == 2)
                                cout << "Your birthday is on a cusp between Pisces and Aquarius\n";
                        if((day > 16 && day < 24) && month ==3)
                                cout << "Your birthday is on a cusp between Pisces and Aries\n";
                        cout << "Your horoscope is 'You will have a splended day. But beware the water puddle'\n";

             	}

		
	}	
	return 0;
}
