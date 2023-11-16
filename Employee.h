#pragma once
#include <iostream>

class Employee

{
public:
	virtual void displayEmployeeDetails(std::string name, int age, int salary) = 0;
};

