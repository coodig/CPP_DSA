#include<iostream>
#include <vector>
using namespace std;

class Node{
    public: 

    // Node define 
        int data;
        Node* left;
        Node* right;

    // Node initialization
        Node(int val){
            data = val;
            left = right = NULL;
        }
};

static int indx =-1;
Node* buildTree(vector<int> preorder){
    indx++;

    if(preorder[indx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[indx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}


int main(){

    // Vector array initialization 
    vector<int> preorder = {1,2,-1,-3,-6,4,2,1,5,-3,0,7,8,};

    Node* root = buildTree(preorder);
    cout << root->left->data <<endl;
    cout << root->right->data <<endl;
    return 0;
}