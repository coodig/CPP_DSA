#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6, 24};
    int target;
    cout << "Enter your targeted elementa:-  ";
    cin >> target;
    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] == target)
        {
            cout << "Targeted element is found at the Index of " << i << "and the Memory Address is " << &arr[i] << endl;
        }
        else
        {
            cout << "Targeted element is not found.....";
        }
    }
}