#include "Savings.h"

Savings::Savings(const std::string& name, float balance, float rate)
    : Account(name, balance), m_Rate(rate)
{
}

Savings::~Savings() {}

float Savings::getInterestRate() const
{
    return m_Rate;
}

void Savings::AccumulateInterest()
{
    m_balance += (m_balance * m_Rate) / 100.0f;
}
