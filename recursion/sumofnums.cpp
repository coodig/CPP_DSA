#include <iostream>

using namespace std;


int sumofnums(int n){
    if(n==1){
        return 1;
    }

    return n + sumofnums(n-1);


}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout << sumofnums(n);
    return 0;
}