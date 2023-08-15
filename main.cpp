/***********************************************************
 * Author: Oseiwe Zion
 * Description: Bank Management system project for creating,
 * depositing
 * and withdrawing from a simulated bank account
 ***********************************************************/
#include "Account.h"
#include <iostream>
#include <cstdlib> // for the exit Function
#include <fstream> // file operations header file
// create a bank account object
Account bankAccount;
// list needed functions
void displayMenu(); // shows the menu of the bank application
void createAccount();
int main()
{
    int menuChoice;
    do
    {
        
        displayMenu();
        std::cout << "Enter a menu choice: ";
        std::cin >> menuChoice;
        switch (menuChoice)
        {
            case 1:
                // create user account
                createAccount();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                // display account details
                break;
            case 6:
                break;
            case 7:
                std::cout << "Have a nice day\n";
                exit(EXIT_SUCCESS);
                break;
            default:
                break;
            }
    } while (menuChoice != 7);
    

    return 0;
}

void displayMenu()
{
    std::cout << "**********Bank Management System**********" << std::endl;
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Search for Account\n";
    std::cout << "5. Display Accounts\n";
    std::cout << "6. Close Account\n";
    std::cout << "7. Quit\n";
}

void createAccount()
{
    bankAccount.getUserInfo(); // get the user's name
}