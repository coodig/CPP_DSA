#include <iostream>

using namespace std;

void full_tace(int a){
    int* p = &a;
    int** q = &p;

    cout<<"together o/p:-"<<endl;
    cout<<"a  : "<<a<<endl;
    cout<<"&a : "<<&a<<endl; 

    cout<<"p  : " << p << endl;              
    cout<<"*p : " << *p << endl;            
    cout<<"&p : " << &p << endl;           

    cout<<"**q: "<< **q << endl;          
    cout<<"*q : "<< *q << endl;           
    cout<<"&q : "<< &q << endl;            

    cout<<"&p : "<< &p << endl;           

}
int main(){
    int b;
    cout<<"Enter the value of a : "<<endl;
    cin>>b;
    full_tace(b);
    return 0;
}


// g++ full_trace.cpp -o full_trace
// ./full_trace.exe