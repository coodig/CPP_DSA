#include <iostream>
#include <vector>

using namespace std;

class Stack{
    vector<int> vec;

    public:

    void stack_push(int val){
        vec.push_back(val);
    }

    void stack_pop(){
        vec.pop_back();
    }

    int stack_top(){
        return vec[vec.size() - 1 ];
    }

    bool empty(){
        return vec.size() == 0;
    }
};

int main(){

    Stack s ;

    s.stack_push(34);
    s.stack_push(35);
    s.stack_push(347);
    s.stack_push(347);
    s.stack_push(348);

    while (!s.empty()){
        cout<< s.stack_top() << " ";
        s.stack_pop();
    }
    cout<<endl;
    
    return 0;
}