#include <iostream>

using namespace std;

class Complex{
    public:
        Complex(int real, int img){
            this.real = real;
            this.img = img;
        };

        void display(){
            cout<< real<<"+i"<<img<<endl;
        }

};
int main(){
    Complex->c1;
    // Complex c2;

    c2.display;
    return 0;
}


// g++ complex_num.cpp -o complex_num
// ./complex_num.exe