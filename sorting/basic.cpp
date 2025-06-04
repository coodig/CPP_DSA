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

void sortingArray(int arr[],int size){
    for(int i=0;i<n-j-1;i++){
        
    }
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        i++;
    }

    cout<< "It's sorted array: ";
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
    sortingArray(arr,n);
    return 0;
}


// for run the code just fire these two commands in the terminal

/*
    g++ basic.cpp -o basic
    ./basic.exe
*/
