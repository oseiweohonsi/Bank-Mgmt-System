#include <iostream>
#include <cctype> // formatting c-strings
#include <cstdlib>
#include <ctime>
#include "Account.h"

// defines the file operations here
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
    std::cout << "Date of Birth (dd/mm/yyyy)\n";
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Year: ";
    std::cin >> year;
    // create an account
    std::cout << "What type of account will you be opening with us!\n";
    std::cout << "Checkings or Savings (C/S): ";
    std::cin >> accountType;
    accountType = tolower(accountType);
    while (accountType != 'c' && accountType != 's')
    {
        std::cout << "Enter a valid account type (C/S): ";
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
    // create account number
    unsigned seed = time(0);
    srand(seed);
    // constants for the maximum account number
    const int MIN = 0;
    const int MAX = 9;
    for (int i = 0; i < ACC_NUM_SIZE; i++)
    {
        accountNum[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }
}

void Account::addDeposit()
{
    std::cout << "Deposit :$";
    double tempDeposit;
    std::cin >> tempDeposit;
    tempDeposit += accBalance;
}

void Account::withdrawAmount()
{
    std::cout << "How much would you like to withdraw :$";
    double tempWithdrawal;
    std::cin >> tempWithdrawal;
    accBalance -= tempWithdrawal;
}

// display user info
void Account::displayUserInfo()
{
    std::cout << "Name: " << userName << std::endl;
    std::cout << "Date of Birth: " << month << "/" << day << "/" << year << std::endl;
    std::cout << "Account Balance: $" << accBalance << std::endl;
    std::cout << "Account Number: #";
    int i = 0;
    while (i < ACC_NUM_SIZE)
    {
        std::cout << accountNum[i];
        i++;
    }
    std::cout << std::endl;
}