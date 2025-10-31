#include "Transaction.h"
#include <iostream>
using namespace std;

// Function to perform a series of account transactions
void Transct(Account* pAccount)
{
    cout << "Transaction Started" << endl;
    cout << "Initial Balance: " << pAccount->getBalance() << endl;

    // Deposit step
    float depositAmount = 200.0f;
    pAccount->Deposit(depositAmount);
    cout << "Deposited: " << depositAmount
        << " -> Balance Now: " << pAccount->getBalance() << endl;

    // Withdraw step
    float withdrawAmount = 170.0f;
    pAccount->Withdraw(withdrawAmount);
    cout << "Withdrawn: " << withdrawAmount
        << " -> Balance Now: " << pAccount->getBalance() << endl;

    // Interest accumulation step
    pAccount->AccumulateInterest();
    cout << "Interest Added (" << pAccount->getInterestRate()
        << "%) -> Balance Now: " << pAccount->getBalance() << endl;

    // Final summary
    cout << "Final Balance: " << pAccount->getBalance() << endl;
    cout << "---------------------------------------------" << endl;
}
