//#include "Transaction.h"
//#include <iostream>
//void Transct(Account* pAccount)
//{
//	cout << "Transaction started" << std::endl;	
//	cout << "initial balance" << pAccount->getBalance()<<std::endl;
//	pAccount->Deposit(100.0f);
//	pAccount->AccumulateInterest();
//	pAccount->Withdraw(170.0f);
//	cout << "intrest rate" << pAccount->getInterestRate() << std::endl;
//	cout << "final balance" << pAccount->getBalance() << std::endl;
//}


#include "Transaction.h"
#include <iostream>

void Transct(Account* pAccount)
{
    std::cout << "Transaction started\n";
    std::cout << "Initial balance: " << pAccount->getBalance() << std::endl;

    // Deposit step
    float depositAmount = 200.0f;
    pAccount->Deposit(depositAmount);
    std::cout << "Deposited: " << depositAmount
        << " -> Balance now: " << pAccount->getBalance() << std::endl;

    // Withdraw step
    float withdrawAmount = 170.0f;
    pAccount->Withdraw(withdrawAmount);
    std::cout << "Withdrawn: " << withdrawAmount
        << " -> Balance now: " << pAccount->getBalance() << std::endl;

    // Interest step
    pAccount->AccumulateInterest();
    std::cout << "Interest added (" << pAccount->getInterestRate()
        << "%) -> Balance now: " << pAccount->getBalance() << std::endl;

    // Final summary
    std::cout << "Final balance: " << pAccount->getBalance() << std::endl;
}
