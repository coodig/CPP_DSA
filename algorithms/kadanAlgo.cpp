#include <iostream>

using namespace std;

void inputArray(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<"Enter the element for "<<i<< " place in array: ";
        cin>>arr[i];
    }
}

void printArray(int arr[],int size){
    cout<<"It's the array which you entered: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// Kadan's algo for create the subarray of an array

void kadanAlgo(int arr[], int size){
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    printArray(arr,n);
    kadanAlgo(arr, n);
    return 0;
}


// for run the code just fire these two commands in the terminal

// g++ kadanAlgo.cpp -o kadanAlgo
// ./kadanAlgo.exe
