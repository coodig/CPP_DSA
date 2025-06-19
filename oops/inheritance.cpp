#include <iostream>

using namespace std;

class parent{
    public:
        void sayHello(){
            cout<<"Hello friends, I am a function of Parent class"<<endl;
        }
};

class child : public parent{
    public:
        void sayHi(){
            cout<<"Hi friends, I am function of child class which is inherits the property of parent class"<<endl;
        }
};

int main(){
    // object of child class
    child obj;

    // calling function of both parent and child class via making only object of child class
    obj.sayHello();
    obj.sayHi();

    return 0;
}


// g++ inheritance.cpp -o inheritance
// ./inheritance.exe