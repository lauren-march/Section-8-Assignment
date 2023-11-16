#include <QtCore/QCoreApplication>
#include <iostream>
#include "Person.h"

void byRef(Person& person)
{
    person.displayHoboDetails("Lauren", 31, 56685168);
}

void byPtr(Person* person)
{
    person->displayEmployeeDetails("Lauren", 31, 2);
}
 
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person mac;

    mac.displayEmployeeDetails("Mac", 36, 500000);
    mac.displayStudentDetails("Mac", 36, 0);
    mac.displayHoboDetails("MacAttack", 36, 1265);

    std::cout << "Ready, FIGHT!" << std::endl;

    byRef(mac);
    byPtr(&mac);


    return a.exec();
}

//"I knowingly do not recognize this as an acceptable vehicle"
