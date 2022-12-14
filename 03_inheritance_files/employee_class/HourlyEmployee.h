//hourlyemployee.h. 
//Interface for the class HourlyEmployee.

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

#include <iostream>
#include <string>

//Here is where we declare that 
// the class HourlyEmployee is the derived class
// and the class Employee is the base class
class HourlyEmployee : public Employee 
{
public:
	//The derived class does NOT inherit constructors.
	//We need to declare new constructors.
    HourlyEmployee( );
    HourlyEmployee(const std::string& newSSN, double newRate);

	//These are new functions
    void setRate(double newRate);
    double getRate( ) const;

	void print() const;

	~HourlyEmployee();

private:
	//This is a new variable
    double hourlyRate; 
};

#endif 

