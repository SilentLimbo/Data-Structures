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

int main()
{
	Pokemon bulbasaur("Bulbasaur", 1, "Grass", "Poison");
	Pokemon ivysaur("Ivysaur", 2, "Grass", "Poison");
	Pokemon charmander("Charmander", 4, "Fire");
	Pokemon arbok("Arbok", 24, "Poison");
	Pokemon nidoking("Nidoking", 34, "Poison", "Ground");
	Pokemon volpix("Volpix", 37, "Fire");
	Pokemon tentacruel("Tentacruel", 73, "Water", "Poison");

	bulbasaur.print();
	ivysaur.print();
	bool found = bulbasaur.commonType(ivysaur);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	bulbasaur.print();
	charmander.print();
	found = bulbasaur.commonType(charmander);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	bulbasaur.print();
	arbok.print();
	found = bulbasaur.commonType(arbok);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	bulbasaur.print();
	nidoking.print();
	found = bulbasaur.commonType(nidoking);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	bulbasaur.print();
	volpix.print();
	found = bulbasaur.commonType(volpix);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	bulbasaur.print();
	tentacruel.print();
	found = bulbasaur.commonType(tentacruel);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	charmander.print();
	arbok.print();
	found = charmander.commonType(arbok);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	charmander.print();
	volpix.print();
	found = charmander.commonType(volpix);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	charmander.print();
	tentacruel.print();
	found = charmander.commonType(tentacruel);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	arbok.print();
	tentacruel.print();
	found = arbok.commonType(tentacruel);
	cout << "    Common type? " << (found ? "Yes" : "No") << endl;
	cout << "------------------------------" << endl;

	cout << endl;
	system("Pause");
	return 0;
}