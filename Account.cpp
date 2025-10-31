#include "Account.h"
#include "Savings.h"
#include <iostream>
using namespace std;

// Initialize static account number generator
int Account::s_AccNoGenerator = 1000;

// Constructor
Account::Account(const string& name, float balance)
    : m_name(name), m_balance(balance)
{
    m_AccNo = ++s_AccNoGenerator;
}

// Destructor
Account::~Account()
{
}

// Getter for account holder name
const string& Account::getName() const
{
    return m_name;
}

// Getter for account balance
float Account::getBalance() const
{
    return m_balance;
}

// Getter for account number
int Account::getAccNo() const
{
    return m_AccNo;
}

// Base implementation: no interest by default
void Account::AccumulateInterest()
{
}

// Withdrawal function with balance validation
void Account::Withdraw(float amount)
{
    if (amount > m_balance)
    {
        cout << "Insufficient Balance";
    }
    else
    {
        m_balance -= amount;
    }
}

// Deposit function
void Account::Deposit(float amount)
{
    m_balance += amount;
}

// Default interest rate (0 for generic account)
float Account::getInterestRate() const
{
    return 0.0f;
}
