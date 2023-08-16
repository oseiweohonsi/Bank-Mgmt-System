#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
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
    std::string DOB; // holds the account holder's date of birth
    int day;
    int month;
    int year;
    char accountType; // Checkings or Savings acconut
    char accountNum[8]; // account number for the created account

public:
    void getUserInfo(); // gets the account holder's name
    void addDeposit(); // add deposit to accBalance
    void withdrawAmount(); // withdrawal function

};
// account constructor
Account::Account() : checkingsDeposit(0.0), savingsDeposit(0.0), accBalance(0.0)
{
}



#endif