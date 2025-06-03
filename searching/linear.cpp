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

int linearSearch(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
        return -1;
    }
    // cout<< "It's reversed array: ";
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }




int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    printArray(arr,n);

    cout<<"Enter the target which you want to search in the array: ";
    cin>>target;
    cout<<linearSearch(arr,n,target);
    return 0;
}



// for run the code just fire these two commands in the terminal

// g++ linear.cpp -o linear
// ./linear.exe
