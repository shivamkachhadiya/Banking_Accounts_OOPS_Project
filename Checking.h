#pragma once
#include "Account.h"

// Derived class representing a Checking Account
class Checking : public Account
{
public:
    // Constructors & Destructor
    Checking(const string& name, float balance);
    Checking();
    ~Checking();

    // Overridden function to apply minimum balance rule
    void Withdraw(float amount) override;
};
