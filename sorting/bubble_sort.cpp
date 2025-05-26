#include <iostream>  // Input-output operations ke liye header file
using namespace std;

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Array ke har element ko print karega
    }
    cout << endl;
}

// Function to perform Bubble Sort and print step-by-step process
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        cout << "Pass " << i + 1 << ":" << endl;
        
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) {  // Agar current element next se bada hai toh swap karo
                swap(arr[j], arr[j + 1]);  // Swap function ka use karke elements exchange kar rahe hain
            }
            printArray(arr, n);  // Har swap ke baad array ka current state print hoga
        }
        cout << endl;
    }
}

int main() {
    int n;  // Variable to store array size

    // User se array ka size input lena
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Array create kar rahe hain user-defined size ke saath

    // User se array ke elements input lena
    cout << "Enter " << n << " elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initial array print karna
    cout << "Initial Array: " << endl;
    printArray(arr, n);

    // Bubble sort function call karna (ye step-wise sorting dikhayega)
    bubbleSort(arr, n);

    // Sorted array print karna
    cout << "Final Sorted Array is: " << endl;
    printArray(arr, n);

    return 0;  // Program successfully terminate ho raha hai
}


// Original Code

// #include <iostream>
// using namespace std;

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
            bool isSwap = false;
//         cout<<"Pass"<<i+1<<":"<<endl;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
                //  swap(arr[j],arr[j+1]); 
                    // isSwap = ture;
//             }
//             printArray(arr,n);
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;

//     cout<< "Enter the size of the array : ";  
//     cin >>n;

//     int arr[n];

//     cout<<"Enter "<< n << " elements in array : " << endl;

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout<<"Intial Array : "<<endl;

//     bubbleSort(arr,n);

//     printArray(arr,n);

//     cout<<"Final Sorted Array is : "<<endl;

//     printArray(arr,n);
// }

