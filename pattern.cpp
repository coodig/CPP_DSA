#include <iostream>
using namespace std;
int main()
{
    //     // squre patterns
    int n;
    cout << "enter the value for n:";
    cin >> n;

    //     // for (int i = 1; i <= n; i++)
    //     // {
    //     //     for (int j = 1; j <= n; j++)
    //     //     {
    //     //         cout << "name ";
    //     //     }
    //     //     cout << endl;
    //     // }

    //     // alphabet pattern

    //     // for (int i = 0; i <= ch; i++)
    //     // {
    //     //     char ch = A;
    //     //     for (int i = 0; i < ; i++)
    //     //     {
    //     //         /* code */
    //     //     }

    //     //     /* code */
    //     // }

    //     // int num = 4;
    //     // for (int i = 0; i <= n; i++)
    //     // {
    //     //     for (int j = 0; j <= n; j++)
    //     //     {
    //     //         cout << num << " ";
    //     //         num++;
    //     //     }
    //     //     cout << endl;
    //     // }

    //     // 1234
    //     // 1234
    //     // 1234
    //     // 1234

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    // cout << j;
    // cout << i;
    // cout << "3";
    //     }
    //     cout << endl;
    // }

    // abcd
    // abcd
    // abcd
    // abcd

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'a';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13  14 15 16

    int num;
    cout << "enter num form where u want to start";
    cin >> num;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // a b c d
    // e f g h
    // i j k l
    // m n o p

    // char ch;
    // cout << "enter the character from where you want to print:-";
    // cin >> ch;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

#include <iostream>
    using namespace std;

    // int main() {
    //     int rows = 3;  // Change this value to increase or decrease the number of rows
    //     int number = 1;  // Initialize the number to start printing from

    // for (int i = 1; i <= rows; ++i) {
    //     // Print spaces
    //     for (int j = 1; j <= rows - i; ++j) {
    //         cout << " ";
    //     }
    //     // Print numbers instead of asterisks
    //     for (int k = 1; k <= i; ++k) {
    //         cout << number++;
    //     }
    //     cout << endl;  // Move to the next line after each row
    // }

    // return 0;
    // }

    // TRIANGLE PATTERN

    // *
    // **
    // ***
    // ****
    // *****

    // int num;
    // cout << "enter the value of num for where you want to start the loop:-";
    // cin >> num;

    // char ch;
    // cout << "enter the character from where you want to start the character:- ";
    // cin >> ch;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < i + 1; j++)
    //     {
    // for single character pattern
    // cout << "f";

    // for print the number 1 to n in triangle form
    // cout << num;
    // num++;

    // for print the character form a b c d and so on
    // cout << ch;
    // ch++;

    // for print the pattern
    //         cout << j;
    //         cout << i;
    //         cout << num;
    //     }
    //     cout << endl;
    // }

    for (int i = n; i < n + 1; i--)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
