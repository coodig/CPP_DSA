#include <iostream>
// #include <array\basic.cpp>
using namespace std;



void inputArray(int size,int arr[]){
    for(int i=0;i<size;i++){
        cout<<"Enter the element for "<< i <<" place in the array: ";
        cin>>arr[i];
    }
    return;
}

void smallestElement(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    inputArray(n,arr);
     // +infinity
    int smallest = INT_MAX;
    cout<< "It's that full array which you input: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            cout<<i<< "is the index of smallest value in the array" <<endl;
        }
    }
    cout<<smallest<<" is smallest value in the array."<<endl;
    return;
}

int main(){
    smallestElement();
    return 0;
}



// for run the code just fire these two commands in the terminal

// g++ smallest.cpp -o smallest
// ./smallest.exe


// alternate way to write this code

// if(arr[i]<smallest){
//             smallest = arr[i];
//         }

// smallest = min(arr[i],smallest);