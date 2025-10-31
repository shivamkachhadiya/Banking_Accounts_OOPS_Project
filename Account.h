#pragma once
#include<string>
using namespace std;
class Account
{
	string m_name;

	int m_AccNo;
	static int s_AccNoGenerator;
protected:
	float m_balance;
public:
	Account(const string &name,float balance);
	~Account(); 

	//getter functions
	const string& getName() const;
	float getBalance() const;
	int getAccNo() const;

	virtual void AccumulateInterest();
	virtual void Withdraw(float amount);
	 void Deposit(float amount);
	virtual float getInterestRate() const;


};

