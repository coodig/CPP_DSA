#include <iostream>
#include <vector>

using namespace std;


void printSubset(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printSubset(arr, ans, i+1);

    ans.pop_back();
    printSubset(arr, ans, i+1);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Enter the elements in array: ";
    for(int i =0; i < n; i++){
        cin>> arr[i];
    }
    vector<int> ans;
    cout<<"Here are all the subsets: "<<endl;

    printSubset(arr, ans, 0);
    return 0;

}