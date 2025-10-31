#include "Savings.h"

// Constructor
Savings::Savings(const std::string& name, float balance, float rate)
    : Account(name, balance), m_Rate(rate)
{
}

// Destructor
Savings::~Savings() {}

// Overridden getter for interest rate
float Savings::getInterestRate() const
{
    return m_Rate;
}

// Overridden function to accumulate interest
void Savings::AccumulateInterest()
{
    m_balance += (m_balance * m_Rate) / 100.0f;
}
