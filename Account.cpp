#include <iostream>
#include <cctype> // formatting c-strings
#include "Account.h"
void Account::getUserName()
{
    // get user's first name
    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Middle Name Initial: ";
    std::cin >> middleName;
    // validate for only one character input
    int i = 0; // counter variable
    while (middleName[i] != '\0')
    {
        i++;
        if (i == 2)
        {
            std::cout << "Only Middle Name initial needed: ";
            std::cin >> middleName;
        }
    }
    std::cout << "Last Name: ";
    std::cin >> lastName;
    // format the names
    firstName[0] = toupper(firstName[0]);
    middleName[0] = toupper(middleName[0]);
    lastName[0] = toupper(lastName[0]);
    userName = firstName + " " + middleName + ". " + lastName;
}

