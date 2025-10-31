#pragma once
#include "Account.h"
#include <string>

class Savings : public Account {
    float m_Rate;

public:
    Savings(const std::string& name, float balance, float rate);
    ~Savings();

    float getInterestRate() const override;   // exact name as in Account
    void AccumulateInterest() override;
};
