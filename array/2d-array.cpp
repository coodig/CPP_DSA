#include<iostream>
using namespace std;

int main(){

    int rows,columns;
    cout<<"enter the value of rows: "<<endl;
    cin>>rows;
    cout<<"enter the value of columns: "<<endl;
    cin>>columns;


    int array[rows][columns];

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"enter the element of position"<<i<<","<<j<<"place in array: ";
            cin>>array[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"your matrix is totally ended";

    
    return 0;


}

// compile the code using this command
// g++ 2d-array.cpp -o 2d-array