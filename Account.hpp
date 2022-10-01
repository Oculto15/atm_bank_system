/// <summary>
/// This is the header file for the project
/// </summary>
#include <iostream>
using namespace std;

namespace account {
    class Account {
    public:
        int global_num;
        float accountBalance;
        int accountID;
        string accountName;
        
    public:

    public:
         Account();
        void accountSetup(int IDNum);
        void Display();
        void Deposit(float deposit);
        void Withdraw(float withdraw);
        int GetID();
        void SetID(int accountID);
        string GetAccountName();
        void SetAccountName(string accountName);

        /*void set_balance(int newBalance);
        float get_balance()const;
        void set_accountID(int newAccountID);
        int get_accountID()const;
        void set_accountName(int newAccountName);
        int get_accountName()const;
        bool operator==(const AccountInformation& other_date)const;*/

    };
}
