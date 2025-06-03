#include <iostream>

using namespace std;

int main()
{

    int arr[] = {
        2,
        4,
        5,
        5,
    };

    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // Print an array using for loop
    for (int i = 0; i < arr[i]; i++)
    {
        cout << "Index is " << i << " and Element is " << arr[i] << " and Address in Memory is " << &(arr[i]) << endl;
    }

    // Print an array using while loop
    int i = 0;
    while (i < arr[i])
    {
        cout << arr[i] << endl;
        i++;
    }

    // Print the size of an array according to datatype like intger take 4 byte for one element so in the above array we have 4 elements so it takes 16 bytes and we have memory address of arr not arr[i](elements address of array)

    cout << sizeof(arr) << endl;
    cout << arr << endl;
    return 0;
}