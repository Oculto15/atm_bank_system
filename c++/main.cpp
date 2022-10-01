// task_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Account.hpp"
#include <iostream>
#include <list>
using namespace std;
using namespace account;

list<Account> accounts;

int findById()
{
  
        int accountId;
        cout << endl;
        cout << "Enter the ID of the account to find:  ";
        cin >> accountId;
        list<Account>::iterator it;
        for (it = accounts.begin(); it != accounts.end(); ++it)
            if (accountId == *&it->accountID){
                it->Display();
                return it->accountID;
            }
        if(accountId != *&it->accountID){
            cout << "Account not found." << endl;
            return 0;
            }
    return 0;
}

int main()
{
    int num1;
    float transaction;
    num1 = -1;
    int global_num = 0;

  
    
    //Create a variable for the Account Class with Account as its type
    Account account;
    
    // Print welcome
    cout << "\"Welcome to the Bank of Money\""<< endl;
    cout << endl;
    
    // create a vairable to store acount info
    string accountName;
    global_num++;
    account.accountSetup(global_num);
    accounts.push_back(account);

    while (num1 != 0)
    {
        cout << "Account Menu:" << endl;
        cout << "0. Quit Program" << endl;
        cout << "1. Display Account Information" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Add new account" << endl;
        cout << "5. Find account by ID" << endl;
        cout << "Your choice: ";
        cin >> num1;


        if (num1 == 1)
        {
            for(Account a: accounts)
            {
                a.Display();
            }
        }
        else if (num1 == 2)
        {
            
            int accountId = findById();
            // list<Account>::iterator it;
            for (auto it = accounts.begin(); it != accounts.end(); ++it)
                if ( accountId == *&it->accountID){
                    cout << "Amount to deposit: ";
                    cin >> transaction;
                    cout << endl;
                    it->Deposit(transaction);
                }
           
        }
        else if (num1 == 3)
        {
          int acctId = findById();
            // list<Account>::iterator it;
            for (auto it = accounts.begin(); it != accounts.end(); ++it)
                if ( acctId == *&it->accountID){
                    cout << "Amount to withdraw: ";
                    cin >> transaction;
                    cout << endl;
                    it->Withdraw(transaction);
                }
           
        }
        else if (num1 == 4)
        {
            cout << endl;
            global_num++;
            account.accountSetup(global_num);
            accounts.push_back(account);
            // cout << "Enter the name: ";
            // cin >> accountName;
            // account.SetAccountName(accountName);

        }
        else if  (num1 == 5)
        {
           findById();
        }
    }

    cout << endl;

    //return 0;
}
