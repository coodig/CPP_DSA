#include <iostream>
#include <string>
using namespace std;


class Car{  // it's a class with the name "Car"

public:

    // These are the attributes
    string brandName;
    int year;
    int tankCapacity;

    // printHeader function for print the heading
    void printHeader(){
        cout<<"Brand Name\t"<<"Year\t"<<"Tank Capacity"<<endl;
    }

    // display function for display the data
    void display(){
        cout<<brandName<<"\t\t"<<year<<"\t\t"<<tankCapacity<<endl;
    }
};

int main(){

    // C1 and C@ is the object of Car class
    Car C1; 
    Car C2;

    // value initialization of C1 and C2 
    C1.brandName = "Tata";
    C1.year = 1891;
    C1.tankCapacity = 18;

    C2.brandName = "Mahindra";
    C2.year = 1991;
    C2.tankCapacity = 15;

    // print header only once 
    C1.printHeader();

    // called display function for print data 
    C1.display();
    C2.display();

    return 0;
}



// for run the code just fire these two commands in the terminal

// g++ class_and_obj.cpp -o class_and_obj
// ./class_and_obj.exe
