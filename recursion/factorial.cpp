#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number of which you want to get factorial: ";
    cin>>n;
    cout<<"Factorial of "<< n << " is "<< factorial(n);
    return 0;

}