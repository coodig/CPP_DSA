#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
        * -> Dereference Operator
        & ->


    */
    // int a = 10;
    // int *ptr = &a;
    // int **parptr = &ptr;
    // int **ptr = NULL;

    // cout << a << endl;
    // cout << *(&a) << endl;
    // cout << &a << endl;
    // cout << *(ptr) << endl;
    // cout << **(&ptr) << endl;
    // cout << **(&parptr) << endl;
    // cout << **(parptr) << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;
    // cout << &parptr << endl;
    // cout << **parptr << endl;
    // cout << *a << endl;

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;
    // cout << **ptr << endl;

    /*
        pointer airthematic operator
    */

    int arr[] = {2, 4, 5, 5, 6, 6};

    // for (int i = 0; i < arr[i]; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    int i = 0;
    while (i < arr[i])
    {
        // cout << arr[i] << endl;
        // cout << &arr[i] << endl;
        cout << arr << endl;
        i++;
    }

    return 0;
}