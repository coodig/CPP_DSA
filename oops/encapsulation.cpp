#include <iostream>
using namespace std;

class BankAccount{ // it's a class which name is BankAccount with private and public both access specifiers
    private: 
        int balance;
    
    public:
    // it's a set balance function for check the amount value condition 
        void setBalance(int amount){
            if(amount >= 0){
                balance = amount;
            }else{
                cout<<"invalid amount"<<endl;
            }
        }

        // get balance function for get or return the value of balance
        int getBalance(){
            return balance;
        }

};
    int main(){
        // acc1 and acc 2 is object of BankAccount class
        BankAccount acc1, acc2;

        // setting balance for acc1 and acc2 
        acc1.setBalance(45555);
        acc2.setBalance(66666);

        // printing the o/p of amount for acc1 and acc2 objects using getBalance method or function
        cout<<"Balance of account 1 is : "<<acc1.getBalance()<<endl;
        cout<<"Balance of account 2 is : "<<acc2.getBalance()<<endl;

        return 0;
}

// g++ encapsulation.cpp -o encapsulation
// ./encapsulation.exe