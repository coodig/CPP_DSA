#include <iostream>
using namespace std;


int main(){
    int arr[] = {12, 23 , 34, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<n<<endl;
    // output of this loop will be like this 

    // this is element 12 and this is the address of array of index 0 0x1b97ffa30
    // this is element 23 and this is the address of array of index 1 0x1b97ffa34
    // this is element 34 and this is the address of array of index 2 0x1b97ffa38
    // this is element 23 and this is the address of array of index 3 0x1b97ffa3c

    for(int i = 0; i < n;i++){
        cout<<"this is element "<<arr[i]<<" and this is the address of array of index "<<i<<" "<<&arr[i]<<endl;
    }

    if(&arr == *(arr)){
        cout<<true<<endl;
    }
    cout<<&arr<<endl;
    cout<<arr+1<<endl;

    // this line will print the array of index 0 means arr[0] per store value means 12 will be the o/p
    cout<<*arr<<endl;
    




    return 0;

}

//  g++ ptr_array.cpp -o ptr_array
// ./ptr_array.exe