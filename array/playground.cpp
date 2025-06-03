#include <iostream>
using namespace std;

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for "<< i <<" place in the array: ";
        cin>>arr[i];
    }
    // return;
}

void printArray(int arr[],int size){
    cout<< "It's that full array which you input: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sameElement(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] == arr[i+1]){
            arr[i] = arr[i+1];
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    printArray(arr,n);

    cout<<sameElement(arr,n);
    return 0;
}



// for run the code just fire these two commands in the terminal

// g++ playground.cpp -o playground
// ./playground.exe
