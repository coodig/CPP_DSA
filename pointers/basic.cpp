#include <iostream>

using namespace std;

void basicPointer(int a){
    // int a = 5;
    cout<<a<<endl;
    int* p = &a;
    cout<<p;
}

int main(){
    basicPointer(5);
}


// g++ basic.cpp -o basic
// ./basic.exe