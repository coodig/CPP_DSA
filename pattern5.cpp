#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "enter the number for the loop:- ";
    cin >> num;
    int n = 1;

    for (int i = 1; i <= num; ++i)
    {
        for (int j = 1; j <= num - i; ++j)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; ++k)
        {

            cout << n++;
        }
        cout << endl;
    }
    return 0;
}