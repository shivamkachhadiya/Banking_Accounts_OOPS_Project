#pragma once
#include <string>
using namespace std;

// Base class representing a generic bank account
class Account
{
private:
    string m_name;                 // Account holder name
    int m_AccNo;                   // Unique account number
    static int s_AccNoGenerator;   // Static account number generator

protected:
    float m_balance;               // Current account balance

public:
    // Constructor & Destructor
    Account(const string& name, float balance);
    virtual ~Account();

    // Getter functions
    const string& getName() const;
    float getBalance() const;
    int getAccNo() const;

    // Virtual functions for polymorphic behavior
    virtual void AccumulateInterest();
    virtual void Withdraw(float amount);
    virtual float getInterestRate() const;

    // Common function for all account types
    void Deposit(float amount);
};
