#pragma once
#include "Account.h"
#include <string>

// Derived class representing a Savings Account
class Savings : public Account
{
private:
    float m_Rate;   // Interest rate for the savings account

public:
    // Constructor & Destructor
    Savings(const std::string& name, float balance, float rate);
    ~Savings();

    // Overridden virtual functions
    float getInterestRate() const override;
    void AccumulateInterest() override;
};
