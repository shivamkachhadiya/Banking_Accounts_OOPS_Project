#include "Checking.h"
#include <iostream>
using namespace std;

// Constructor
Checking::Checking(const string& name, float balance)
    : Account(name, balance)
{
}

// Destructor
Checking::~Checking()
{
}

// Overridden Withdraw method for Checking account
void Checking::Withdraw(float amount)
{
    if ((m_balance - amount) > 50.0f)
    {
        Account::Withdraw(amount);
    }
    else
    {
        cout << "Cannot withdraw amount. Minimum balance should remain 50 after withdrawal." << endl;
    }
}
