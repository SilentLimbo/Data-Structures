/*
	Ghaly, Mina

	Febuary 15, 2020

	CS A250
	A2 - Pokemon class
*/

#include<iostream>
#include<string>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon()
{
	dexNum = 0;
}

Pokemon::Pokemon(const std::string& pokeName, int id, const std::string& type1)
{
	name = pokeName;
	dexNum = id;
	type_1 = type1;
}

Pokemon::Pokemon(const std::string& pokeName, int id, const std::string& type1, const std::string& type2)
{
	name = pokeName;
	dexNum = id;
	type_1 = type1;
	type_2 = type2;
}

/*
		compares the pokemon using the member function to the pokemon in the parameter.
		checks if there is a common type.
		t1 compare t_1, t1 compare t_2, etc.
*/
bool Pokemon::commonType(const Pokemon& pocketMonster)
{
	bool common = false;
	string mon1type1 = type_1;
	string mon1type2 = type_2;
	string mon2type1 = pocketMonster.type_1;
	string mon2type2 = pocketMonster.type_2;

	if (mon1type2 == "")
	{
		if (mon1type1 == mon2type1)
			common = true;
		else if (mon1type1 == mon2type2)
			common = true;
	}
	else
	{
		if (mon1type1 == mon2type1)
			common = true;
		else if (mon1type1 == mon2type2)
			common = true;
		else if (mon1type2 == mon2type1)
			common = true;
		else if (mon1type2 == mon2type2)
			common = true;
	}
	
	return common;
}

/*
		Prints in the format of :Pokemon name: type1 type2"
		ex: Charmander: Fire
			Charizard: Fire Flying
*/
void Pokemon::print() const
{
	cout << name << ": " << type_1 << " " << type_2 << endl;
}

Pokemon::~Pokemon()
{

}