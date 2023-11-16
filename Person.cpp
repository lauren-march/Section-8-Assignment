#include "Person.h"
#include <iostream>

Person::Person(QObject* parent) : QObject(parent)
{

}

void Person::displayHoboDetails(std::string name, int age, int bumFightsWon)
{
	std::cout << "Hobo Details" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Bum Fights Won: " << bumFightsWon << std::endl;
	std::cout << "________________" << std::endl;
}

void Person::displayEmployeeDetails(std::string name, int age, int salary)
{
	std::cout << "Employee Details" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Salary: " << salary << std::endl;
	std::cout << "________________" << std::endl;
}

void Person::displayStudentDetails(std::string name, int age, int studentDebt)
{
	std::cout << "Student Details" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Student Debt: " << studentDebt << std::endl;
	std::cout << "________________" << std::endl;
}
