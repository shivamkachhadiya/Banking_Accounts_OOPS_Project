#include "Checking.h"
#include <iostream>
using namespace std;

Checking::Checking(const string& name, float balance)
    : Account(name, balance)
{
}

Checking::~Checking()
{
}

void Checking::Withdraw(float amount)
{
    if ((m_balance - amount) > 50.0f)
    {
        Account::Withdraw(amount);
    }
    else
    {
        cout << "Cannot withdraw amount, Minimum balance should be 50 after withdrawal" << endl;
    }
}
