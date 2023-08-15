#include <iostream>
#include <cctype> // formatting c-strings
#include "Account.h"
void Account::getUserInfo()
{
    // get user's names
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
    // Get the user date of birth
    std::cout << "Date of Birth (dd/mm/yyyy): ";
    std::cin >> DOB;
    // create an account
    std::cout << "What type of account will you be opening with us!\n";
    std::cout << "Checkings or Savings (C/S): ";
    std::cin >> accountType;
    accountType = tolower(accountType);
    while (accountType != 'c' || accountType != 's')
    {
        std::cout << "Enter a valid account type (C/S): ";
        std::cin >> accountType;
    }
    // validate account
    if (accountType == 'c')
    {
        double tempDeposit;
        std::cout << "Checkings Deposit $:";
        std::cin >> checkingsDeposit;
        accBalance = checkingsDeposit + accBalance;
    }
    else if (accountType == 's')
    {
        double tempDeposit;
        std::cout << "Savings Deposit $:";
        std::cin >> savingsDeposit;
        accBalance = savingsDeposit + accBalance;
    }

}

