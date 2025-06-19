#include <iostream>
#include <string>

using namespace std;

// Method or function overloading in polymorphism
class print{

    public:
        void show(int a,int b){
            cout<<"Sum of a and b is "<< a+b <<endl;
        }

        void show(double x, double y){
            cout<<"Product of x and y is "<< x*y <<endl;
        }

        void show(std::string s1, std::string s2){
            cout<<"Here is your whole name "<<s1<<" "<<s2<<endl;

        }
};



int main(){
    print p;

    p.show(45,22);
    p.show(13.23, 344.32);
    p.show("adarsh","sharma");
    
    return 0;
}


// g++ overloading_polymorphism.cpp -o overloading_polymorphism
// ./overloading_polymorphism.exe