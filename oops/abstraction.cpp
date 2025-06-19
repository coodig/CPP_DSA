#include <iostream>
using namespace std;

class ATM{
    private:
        int originalPin = 8888;

        // checkPin function for match the original and entered pin 
        bool checkPin(int enteredPin){
            return enteredPin == originalPin;
        }

    public:
        // withdraw function for show the amount is withdraw or not
        void withdraw(int enteredPin, int amount){
            if(checkPin(enteredPin)){
                cout<<"\033[32mWithdrawal of Rs. " << amount << " successful.\033[0m\n";
            }else{
                cout<<"Your entered pin "<<"\033[33m"<<enteredPin<<"\033[0m"<<"\033[31m Wrong \033[0m"<<endl;
            }
        }
};


int main(){
    ATM adarshATM;

    adarshATM.withdraw(3333, 100000); // it will show you an error
    adarshATM.withdraw(8888, 100000); // it will show you an successfull message
    return 0;
}

// g++ abstraction.cpp -o abstraction
// ./abstraction.exe