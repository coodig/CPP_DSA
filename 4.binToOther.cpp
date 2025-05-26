#include <iostream>
#include <string>
using namespace std;

int binToDec(int binNum)
{
    int decNum = 0;
    int baseValue = 1;

    while (binNum > 0)
    {
        int lastDig = binNum % 10;
        decNum += lastDig * baseValue;
        binNum /= 10;
        baseValue *= 2;
    }
    return decNum;
}

int binToOct(int binNum)
{
    int octNum = 0;
    int decNum = 0;
    int baseValue = 1;

    while (binNum > 0)
    {
        int lastDigit = binNum % 10;
        decNum += lastDigit * baseValue;
        binNum /= 10;
        baseValue *= 2;
    }

    baseValue = 1;
    while (decNum > 0)
    {

        int remainder = decNum % 8;
        octNum += remainder * baseValue;
        decNum /= 8;
        baseValue *= 10;
    }
    return octNum;
}

string intToBinStr(int binNum)
{
    string binStr = "";
    while (binNum > 0)
    {
        binStr = (binNum % 10 == 1 ? '1' : '0') + binStr;
        binNum /= 10;
    }
    return binStr;
}

string binToHex(string binNum)
{
    string hexResult = "";
    int length = binNum.length();

    int padding = 4 - (length % 4);
    if (padding != 4)
    {
        binNum = string(padding, '0') + binNum;
    }

    for (int i = 0; i < binNum.length(); i += 4)
    {
        string fourDigit = binNum.substr(i, 4);

        if (fourDigit == "0000")
            hexResult += "0";
        else if (fourDigit == "0001")
            hexResult += "1";
        else if (fourDigit == "0010")
            hexResult += "2";
        else if (fourDigit == "0011")
            hexResult += "3";
        else if (fourDigit == "0100")
            hexResult += "4";
        else if (fourDigit == "0101")
            hexResult += "5";
        else if (fourDigit == "0110")
            hexResult += "6";
        else if (fourDigit == "0111")
            hexResult += "7";
        else if (fourDigit == "1000")
            hexResult += "8";
        else if (fourDigit == "1001")
            hexResult += "9";
        else if (fourDigit == "1010")
            hexResult += "A";
        else if (fourDigit == "1011")
            hexResult += "B";
        else if (fourDigit == "1100")
            hexResult += "C";
        else if (fourDigit == "1101")
            hexResult += "D";
        else if (fourDigit == "1110")
            hexResult += "E";
        else if (fourDigit == "1111")
            hexResult += "F";
    }

    return hexResult;
}

int main()
{
    int binNum;
    cout << "Enter the Binary Number:- ";
    cin >> binNum;

    int decimalValue = binToDec(binNum);
    cout << "Your Binary to Decimal converted value is " << decimalValue << endl;

    int octalValue = binToOct(binNum);
    cout << "Your Binary to Octal converted value is " << octalValue << endl;

    string binNumString = intToBinStr(binNum);
    string hexdecimalValue = binToHex(binNumString);
    cout << "Your Binary to Hexadecimal converted value is " << hexdecimalValue << endl;

    return 0;
}