//Example of  encapsulation
#include<iostream>
using namespace std;

class Bank{
    private:
    public:
    string name;
    int accountno;  
    int balance;

    public:
    Bank(string name, int accountno, int balance){
        this->name = name;
        this->accountno = accountno;
        this->balance = balance;
    }
    void check_balance(){
        cout << balance << endl;
    }
    void deposit(int amount){
        this->balance += amount;
    }
    void withdraw(int amount){
        if(canWithdraw(amount)){
            this->balance -= amount;
            cout << "Withdrawal Successful" << endl;
        }
        else{
            cout << "Insufficient Balance" << endl;
        }
    }
    bool canWithdraw(int amount){
        if(this->balance>=amount){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Bank bank("abc",458789,14654);
    bank.balance=200;
    cout << bank.balance<<endl;
    bank.check_balance();
    bank.deposit(100);
    bank.withdraw(1000);
    // cout << bank.check_balance<< endl;
    bank.check_balance();
    return 0;
}