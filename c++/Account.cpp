// include the header file this cpp is attached to
#include "Account.hpp"
// include iostream library for standard input and outputs in C++ language
#include <iostream>
// include standard namespace for all the common types in c++
using namespace std;
// include the account namespace for all the methods and types we
// created in Account header file
using namespace account;

//set the global number variable to be 0


//Pull the proper variables from the account constuctor in the header file
// Along with there proper values to be passed in
//*ALSO - the global number is incramented and replaced by one by putting in
//the ++ method and it is passed into account ID for its value
Account::Account() : accountID(global_num), accountBalance(0.0), accountName("") {}

//Create the first method to help the user setup their account
void Account::accountSetup(int IDNum)
{
   
    accountID = IDNum;
    cout << "Enter the name: ";
    cin >> accountName;
    cout << endl;
    cout << "Enter the balance: ";
    cin >> accountBalance;
    cout << endl;
}

//Create the second method to display the account that is created in the system
void Account::Display()
{
    cout << endl;
    cout << "Account ID: " << accountID<< endl;
    cout << "Name: " << accountName << endl;
    cout << "Balance: $" << accountBalance << endl;
    cout << endl;
}

//Create the third method to allow the user to deposit money
void Account::Deposit(float deposit)
{
    accountBalance += deposit;
}

//Create the fourth method to allow the user to withdraw money
void Account::Withdraw(float withdraw)
{
    accountBalance -= withdraw;
}

int Account::GetID()
{
    return accountID;
}
void Account::SetID(int accountID)
{
    accountID = accountID;
}

string Account::GetAccountName()
{
    return accountName;
}

void Account::SetAccountName(string accountName)
{
    accountName = accountName;
}
