//Interface of the class Employee
//Base class, from which we will derive subsets of employees.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
public:
    Employee();
    Employee(const std::string& newSSN);

	std::string getSSN() const;

    void setSSN(const std::string& newSSN);

	void print() const;

	~Employee();

private:
	std::string ssn;
};

#endif 

