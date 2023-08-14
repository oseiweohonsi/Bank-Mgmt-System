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
    char *DOB; // holds the account holder's date of birth
public:
    void getUserName(); // gets the account holder's name
};

#endif