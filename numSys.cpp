#include <iostream>
using namespace std;

int main()
{
    // // dec to bin num converstion
    // int ans = 0;
    // int decNum;
    // cin >> decNum;
    // int pow = 1;
    int rem;
    // while (decNum > 0)
    // {
    //     rem = decNum % 2;
    //     cout << "remainder" << rem << endl;
    //     decNum = decNum / 2;
    //     cout << "decNum" << decNum << endl;
    //     ans = ans + (rem * pow);
    //     cout << "this is answer" << ans << endl;
    //     pow = pow * 10;
    //     cout << "this is power" << pow << endl;
    //     // for (int i = 0; i > ans; i++)
    //     // {
    //     cout << "this is final answer" << ans << endl;
    //     /* code */
    //     // }
    // }

    // 1100101 to dec num
    // int input;
    // cin >> input;
    // cout << "enter any input:-";
    // int ans = 0;
    // while ()
    // {
    //     /* code */
    // }

    int binNum, ans = 0;
    int pow = 1;
    cin >> binNum;

    while (binNum > 0)
    {
        rem = binNum % 10;
        cout << "this is remainder" << rem << endl;
        ans += rem * pow;
        cout << "this is answer " << ans << endl;
        binNum /= 10;
        cout << "this is again binary number" << binNum << endl;
        pow *= 2;
        cout << "this is power" << pow << endl;
    }
    cout << ans;
}