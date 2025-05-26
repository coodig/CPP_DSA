// formula for subarray is n*n(n+1)/2
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of array";
    std::cin >> size;
    int array[size] = {};

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        array[i] = ele;
    }

    // insertion in array
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        cout << array[i] << " ";
    }

    // deletion in array
    // for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    // {
    //     array[2] = INT8_MIN;
    // }

    cout << array[(sizeof(array) / sizeof(int)) - 1];

    // for (int st = 0; st < size; st++)
    // {
    //     for (int end = st; end < size; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << array[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}