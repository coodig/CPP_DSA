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

void reverseArray(int arr[],int size){
    int start = 0, end =size-1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<< "It's reversed array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    printArray(arr,n);
    reverseArray(arr,n);
    return 0;
}



// for run the code just fire these two commands in the terminal

// g++ reverse.cpp -o reverse
// ./reverse.exe
