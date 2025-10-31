
//#include <iostream>
//#include <memory>
//#include "Account.h"
//#include "Checking.h"
//#include "Savings.h"
//#include "Transaction.h"
//
//using namespace std;
//
//void showMenu()
//{
//    cout << "\n===== BANKING SYSTEM MENU =====" << endl;
//    cout << "1. Create Savings Account" << endl;
//    cout << "2. Create Checking Account" << endl;
//    cout << "3. Deposit Amount" << endl;
//    cout << "4. Withdraw Amount" << endl;
//    cout << "5. Accumulate Interest" << endl;
//    cout << "6. Show Account Details" << endl;
//    cout << "7. Exit" << endl;
//    cout << "===============================" << endl;
//    cout << "Enter your choice: ";
//}
//
////int main()
//{
//    Account* pAccount = nullptr; // base class pointer for polymorphism
//    int choice;
//    bool exitFlag = false;
//
//    while (!exitFlag)
//    {
//        showMenu();
//        cin >> choice;
//        cout << endl;
//
//        switch (choice)
//        {
//        case 1:
//        {
//            if (pAccount)
//            {
//                delete pAccount;
//                pAccount = nullptr;
//            }
//            string name;
//            float balance, rate;
//            cout << "Enter name: ";
//            cin >> name;
//            cout << "Enter initial balance: ";
//            cin >> balance;
//            cout << "Enter interest rate (%): ";
//            cin >> rate;
//            pAccount = new Savings(name, balance, rate);
//            cout << "Savings account created successfully!" << endl;
//            break;
//        }
//
//        case 2:
//        {
//            if (pAccount)
//            {
//                delete pAccount;
//                pAccount = nullptr;
//            }
//            string name;
//            float balance;
//            cout << "Enter name: ";
//            cin >> name;
//            cout << "Enter initial balance: ";
//            cin >> balance;
//            pAccount = new Checking(name, balance);
//            cout << "Checking account created successfully!" << endl;
//            break;
//        }

        //case 3:
        //{
        //    if (!pAccount)
        //    {
        //        cout << "Please create an account first!" << endl;
        //        break;
        //    }
        //    float amt;
        //    cout << "Enter deposit amount: ";
        //    cin >> amt;
        //    pAccount->Deposit(amt);
        //    cout << "Amount deposited successfully. Current Balance: " << pAccount->getBalance() << endl;
        //    break;
        //}

        //case 4:
        //{
        //    if (!pAccount)
        //    {
        //        cout << "Please create an account first!" << endl;
        //        break;
        //    }
        //    float amt;
        //    cout << "Enter withdraw amount: ";
        //    cin >> amt;
        //    pAccount->Withdraw(amt);
        //    cout << "Current Balance: " << pAccount->getBalance() << endl;
        //    break;
        //}

        //case 5:
        //{
        //    if (!pAccount)
        //    {
        //        cout << "Please create an account first!" << endl;
        //        break;
        //    }
        //    pAccount->AccumulateInterest();
        //    cout << "Interest accumulated successfully! Current Balance: " << pAccount->getBalance() << endl;
        //    break;
        //}

        //case 6:
        //{
        //    if (!pAccount)
        //    {
        //        cout << "Please create an account first!" << endl;
        //        break;
        //    }
        //    cout << "\n===== ACCOUNT DETAILS =====" << endl;
        //    cout << "Name: " << pAccount->getName() << endl;
        //    cout << "Account No: " << pAccount->getAccNo() << endl;
        //    cout << "Balance: " << pAccount->getBalance() << endl;
        //    cout << "Interest Rate: " << pAccount->getInterestRate() << "%" << endl;
        //    cout << "===========================" << endl;
//            break;
//        }
//
//        case 7:
//        {
//            exitFlag = true;
//            cout << "Exiting Banking System. Goodbye!" << endl;
//            break;
//        }
//
//        default:
//            cout << "Invalid choice. Try again!" << endl;
//        }
//    }
//
//    if (pAccount)
//        delete pAccount;
//
//    return 0;
//}
