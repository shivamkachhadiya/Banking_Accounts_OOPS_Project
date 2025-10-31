#pragma once
#include "Account.h"
class Checking :
    public Account
{
public:
	Checking(const string& name, float balance);
	Checking();
	~Checking();
	void Withdraw(float amount);	
};

