#include <iostream>
#include "Account.h"
void Account::getUserName()
{
    // get user's first name
    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
}