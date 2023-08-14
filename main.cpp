/***********************************************************
 * Author: Oseiwe Zion
 * Description: Bank Management system project for creating, 
 * depositing
 * and withdrawing from a simulated bank account
***********************************************************/
#include <iostream>
#include <fstream> // file operations header file
void displayMenu(); // shows the menu of the bank application
int main()
{
    displayMenu();
    return 0;
}

void displayMenu()
{
    std::cout << "**********Bank Management System**********" << std::endl;
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Quit\n";
}