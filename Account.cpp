#include "Account.h"
#include<iostream>
#include "Savings.h"
int Account::s_AccNoGenerator = 1000;
Account::Account(const string& name, float balance):
	m_name(name), m_balance(balance)
{
	m_AccNo = ++s_AccNoGenerator;
}

Account::~Account()
{
}

const string& Account::getName() const
{
	return m_name;
	// TODO: insert return statement here
}

float Account::getBalance() const
{
	return m_balance;
}

int Account::getAccNo() const
{
	return m_AccNo;
}



void Account::AccumulateInterest()
{

}

void Account::Withdraw(float amount)
{
	if(amount>m_balance)
	{
		cout<< "Insufficient Balance";
	}
	else {
		m_balance -= amount;
	}
}

void Account::Deposit(float amount)		
{
	m_balance += amount;
}

float Account::getInterestRate() const
{
	return 0.0f;
}
