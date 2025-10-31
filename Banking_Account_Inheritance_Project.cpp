

#include <iostream>
#include "Account.h"  
#include "Checking.h"
#include "Transaction.h"
#include "Savings.h"
using namespace std;
int main()
{

 //   std::cout << "Hello World!\n";

	////Account acc("shivam kachhadiya", 5000.0f);
	//Checking acc("shiv", 1000);
	//cout << "initial balance: " << acc.getBalance() << endl;	
	////acc.Deposit(2000.0f);
	//acc.Withdraw(980.0f);
	//cout<< "final balance: " << acc.getBalance() << endl;

	std::string name = "shiv";
	Savings acc(name, 100, 0.5);
	Transct(&acc);



	return 0;


}

