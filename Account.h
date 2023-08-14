#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
private:
    double savingsDeposit; // deposit made into a savings acccount
    double checkingsDeposit;    // deposit made into a checkings account
    double accBalance;  // Balance of the account
public:
    Account(/* args */);
    ~Account();
};

Account::Account(/* args */)
{
}

Account::~Account()
{
}

#endif