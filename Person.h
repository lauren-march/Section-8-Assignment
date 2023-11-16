#pragma once
#include <qobject.h>
#include <iostream>
#include "Student.h"
#include "Employee.h"
#include "Hobo.h"

class Person : public QObject, public Student, public Employee, public Hobo
{
public:
	explicit Person(QObject* parent = nullptr);

	void displayStudentDetails(std::string name, int age, int studentDebt) override;
	void displayEmployeeDetails(std::string name, int age, int salary) override;
	void displayHoboDetails(std::string name, int age, int bumFightsWon) override;


private:
	std::string name;
	int age = 0;


};

