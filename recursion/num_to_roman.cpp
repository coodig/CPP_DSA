#include <iostream>
#include <vector>

using namespace std;

string numToRoman(int num){

    static vector<pair<int, string>> roman = {
        {1000 , "M"},
        {900 , "CM"},
        {500 , "D"},
        {400 , "CD"},
        {100 , "C"},
        {90 , "XC"},
        {50 , "L"},
        {40 , "XL"},
        {10 , "X"},
        {9 , "IX"},
        {5 , "V"},
        {4 , "IV"},
        {1 , "I"},
    };

    // my base condition
    if(num == 0)
        return "";

    for(auto &pair: roman){
        if(num >= pair.first){
            return pair.second + numToRoman(num - pair.first);
        }
    }

    return "";
}

int main(){
    int num;
    cout<< "Enter the number for a Roman number: ";
    cin>>num;

    cout<<numToRoman(num);
    return 0;
}




// Here's the core logic without using STL

/*

string numToRoman(int num) {
    if (num >= 1000) return "M" + numToRoman(num - 1000);
    else if (num >= 900) return "CM" + numToRoman(num - 900);
    else if (num >= 500) return "D" + numToRoman(num - 500);
    else if (num >= 400) return "CD" + numToRoman(num - 400);
    else if (num >= 100) return "C" + numToRoman(num - 100);
    else if (num >= 90) return "XC" + numToRoman(num - 90);
    else if (num >= 50) return "L" + numToRoman(num - 50);
    else if (num >= 40) return "XL" + numToRoman(num - 40);
    else if (num >= 10) return "X" + numToRoman(num - 10);
    else if (num >= 9) return "IX" + numToRoman(num - 9);
    else if (num >= 5) return "V" + numToRoman(num - 5);
    else if (num >= 4) return "IV" + numToRoman(num - 4);
    else if (num >= 1) return "I" + numToRoman(num - 1);
    else return ""; // base case
}

*/