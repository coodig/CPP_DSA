#include <iostream>

using namespace std;

void inputArray(int size, int arr[]){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for index " <<i<<" ";
        cin>>arr[i];
    }
    return;
}

void printLargestElement(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    inputArray(n,arr);
    // -infinity
    int largest = INT_MIN;
    cout<< "It's your enterd array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
            cout << i <<" is the index of largest value in the array."<<endl;
        }
    }
    cout<<largest<<" is largest value in the array."<<endl;

    return;
}
int main(){
    printLargestElement();
    return 0;
}


// for run the code just fire these two commands in the terminal

// g++ largest.cpp -o largest
// ./largest.exe



// alternate way to write this code

//  if(arr[i]>largest){
//             largest = arr[i];
//         }

// largest = max(arr[i],largest);