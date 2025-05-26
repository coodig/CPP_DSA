#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "enter the value for n";
    cin >> n;
    cout << "enter the value for m";
    cin >> m;
    // cout << "enter any number";
    // cin >> n;
    // char ch;
    // cout << "enter a char:-";
    // cin >> ch;
    // // if (ch >= 'a' && ch <= 'z')

    // // implicit type conversion
    // if (ch >= 65 && ch <= 90)
    // {
    //     cout << "uppercase";
    // }
    // else
    // {
    //     cout << "char is in lowercase";
    // }

    // ternary operator

    // cout << (n % 2 == 0 ? "even" : "odd") << endl;

    // while (n <= m)
    // {
    //     cout << n << " ";
    //     // n++;
    // }

    // n << endl;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << i;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "x";
        }

        cout << endl;
    }

    return 0;
}