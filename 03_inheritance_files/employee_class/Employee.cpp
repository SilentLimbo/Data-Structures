//Implementation of class Employee

#include "Employee.h"

using namespace std;

	//default constructor
Employee::Employee( )
{
	ssn = "No data yet.";
}

	//overloaded constructor
Employee::Employee(const string& newSSN) 
{			
	ssn = newSSN;
}

	//getSSN
string Employee::getSSN( ) const 
{
    return ssn;
}

	//setSSN
void Employee::setSSN(const string& newSsn)
{
    ssn = newSsn;
}

	//print
void Employee::print() const
{
	cout << "SSN: " << ssn << endl;
}

	//~Employee
Employee::~Employee()
{}