/*
	Ghaly, Mina

	Febuary 15, 2020

	CS A250
	A2 - Pokemon class 
*/
#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon
{
public:
	//constructors
	Pokemon(); //default 
	Pokemon(const std::string& pokeName, int id, const std::string& type1); //single type pokemon
	Pokemon(const std::string& pokeName, int id, const std::string& type1, const std::string& type2); //dual type pokemon

	std::string getType1() const { return type_1; } //returns a string of the type1 (could return empty string)
	std::string getType2() const { return type_2; } //returns a string of the type2 (could return empty string)

	/*
		compares the pokemon using the member function to the pokemon in the parameter.
		checks if there is a common type.
		t1 compare t_1, t1 compare t_2, etc. 
	*/
	bool commonType(const Pokemon& pocketMonster);

	/*
		Prints in the format of :Pokemon name: type1 type2" 
		ex: Charmander: Fire
			Charizard: Fire Flying
	*/
	void print() const;

	~Pokemon();
private:
	std::string name;
	int dexNum;
	std::string type_1;
	std::string type_2;
};

#endif