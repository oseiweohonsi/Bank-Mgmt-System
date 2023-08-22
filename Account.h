#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
const int ACC_NUM_SIZE = 8;
class Account
{
private:
    double savingsDeposit;   // deposit made into a savings acccount
    double checkingsDeposit; // deposit made into a checkings account
    double accBalance;       // Balance of the account
    std::string userName;    // account holder's name
    std::string firstName;   
    std::string middleName;
    std::string lastName;
    // holds the account holder's date of birth
    int day;
    int month;
    int year;
    char accountType; // Checkings or Savings acconut
    int accountNum[ACC_NUM_SIZE]; // account number for the created account

public:
    void getUserInfo(); // gets the account holder's name
    void addDeposit(); // add deposit to accBalance
    void withdrawAmount(); // withdrawal function
    void displayUserInfo(); // display the contents of the account

};



#endif