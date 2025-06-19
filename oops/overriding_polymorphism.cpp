#include <iostream>

using namespace std;

class Animal{
    public: 
        virtual void sound(){
            cout<<"This is the collection of sounds : "<<endl;
        }
};

class Dog:public Animal{
    public:
        void sound() override{
            cout<<"Bhow! Bhow!"<<endl;
        }
};

class Cow:public Animal{
    public:
        void sound() override{
            cout<<"Meow! Meow!"<<endl;
        }
};

int main(){
    Animal* a1 = new Dog();
    Animal* a2 = new Cow();

    a1->sound();
    a2->sound();

    delete a1;
    delete a2;

    return 0;
}

// g++ overriding_polymorphism.cpp -o overriding_polymorphism
// ./overriding_polymorphism.exe