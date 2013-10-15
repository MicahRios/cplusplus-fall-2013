#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Superhero.h"

using namespace std;

int main()
{
	/*
	Superhero hulk("Bruce", "Banner", "Hulk Smash", "Hulk");
	Superhero thor("Thor", "Odinson", "Mjollnir", "Thor");
	Superhero thunderstrike("Eric", "Masterson", "Thunderstrike", "Thunderstrike");
	Superhero antman("Henry", "Pymn", "Grow/Shrink", "Ant Man");


	Superhero heroes[4];
	heroes[0] = hulk;
	heroes[1] = thor;
	heroes[2] = thunderstrike;
	heroes[2] = antman;
	*/

	Superhero heroes[4];

	heroes[0] = Superhero("Bruce", "Banner", "Hulk Smash", "Hulk");
	heroes[1] = Superhero("Thor", "Odinson", "Mjollnir", "Thor");
	heroes[2] = Superhero("Eric", "Masterson", "Thunderstrike", "Thunderstrike");
	heroes[3] = Superhero("Henry", "Pymn", "Grow/Shrink", "Ant Man");

	for (int i = 0; i < 4; i++)
	{
		cout << heroes[i].first_name() << " "
			 << heroes[i].last_name() << " "
			 << heroes[i].power() << " "
			 << heroes[i].name() << endl;
	}

	cout << "Please enter a hero name, first name, last name, or superpower to search for in the SuperHero Database: ";
	string query_input = "";
	cin>> query_input;

	bool found = false;
	int count = 0;

	// Loop through the Superheroes to find a match.
	while (!found && count < 4)
	{
		//  Look for match of first_name to superhero.firstname
		if (query_input == heroes[count].first_name()
			|| query_input == heroes[count].last_name()
			|| query_input == heroes[count].power()
			|| query_input == heroes[count].name())
		{
			cout << "Found \"" << query_input << "\" on: "
				 << heroes[count].name() << "=" << heroes[count].first_name()
				 << " " << heroes[count].last_name() << endl;
			found = true;
		}
		count++;
	}

	if (!found)
	{
		cout << "Sorry, there is no superhero by that first name." << endl;
	}

	_getch();
	return 0;

}
