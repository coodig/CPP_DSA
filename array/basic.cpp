#include <iostream>
using namespace std;

void inputArray(int size,int arr[]){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for "<< i <<" place in the array: ";
        cin>>arr[i];
    }
    return;
}

void printArray(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    inputArray(n,arr);
    cout<< "It's that full array which you input: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    printArray();
    return 0;
}


// for run the code just fire these two commands in the terminal

// g++ basic.cpp -o basic
// ./basic.exe
