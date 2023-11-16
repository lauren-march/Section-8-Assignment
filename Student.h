#pragma once
#include <iostream>

class Student

{
public:
	virtual void displayStudentDetails(std::string name, int age, int studentDebt) = 0;
};

