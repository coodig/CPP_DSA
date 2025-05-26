#include<iostream>
using namespace std;

// Created a Node
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

// Created a list 
class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = tail = NULL;
        }

        // Created pushFront function
        void pushFront(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        // Created pushBack function
        void pushBack(int val){
            Node* newNode = new Node(val);

            if( head == NULL){
                head = tail = newNode;
                return;
            }else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

        // Created popFront function
        void popFront(){
            if(head == NULL){
                cout << "Linked List is empty."<< endl;
                return;
            }

            Node* temp = head;
            head = head->next;
            temp->next = NULL;

            delete temp;
        }

        // Created pushBack function
        void popBack(){
              if(head == NULL){
                cout << "Linked List is empty."<< endl;
                return;
            }

            Node* temp = head;
            while (temp->next !=tail){
                temp = temp->next;
            }

            temp->next=NULL;
            delete tail;
            tail = temp;            
        }

        // Created a function for insert in the middle in the linked list
        void insert(int val, int pos){

            if (pos < 0){
                cout<< "Invalid Position";
                return;
            }

            if(pos == 0){
                pushFront(val);
                return;
            }

            Node* temp = head;

            for (int i = 0; i < pos-1; i++){
                if(temp == NULL){
                    cout<< pos <<" is an invalid position..\n";
                    return;
                }
                temp = temp->next;
            }

            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }

        // Created a function for search in the linked list
        int search(int key){
            Node* temp = head;
            int index = 0;

            while (temp != NULL){
                if(temp -> data == key){
                    return index;
                }

                temp = temp->next;
                index++;
            }

            return -1;  
        }

        // Function for print the linked list
        void printLinkedlist(){
            Node* temp = head;
            
            while (temp != NULL){
                cout << temp->data <<"->";
                temp = temp->next;
            }
            cout << "NULL" <<endl;
            
        }


};

int main(){
    List ll;

    ll.pushFront(20);
    ll.pushFront(1);
    ll.pushFront(9);
    ll.popFront(); //it will remove 9 from the linked list

    ll.pushBack(13);
    ll.pushBack(123);
    ll.popBack(); //it will remove 123
    ll.pushBack(23);

    ll.insert(3, 30);
    
    int key;
    cout << "Enter the element to search : ";
    cin>> key;

    int index = ll.search(key);

    if(index != -1){
        cout<< index <<" is the position of "<< key<<"in the linked list."<<endl;
    }else{
        cout<< key << " is not in the linked list"<<"."<<endl;
    }


    ll.printLinkedlist();

    return 0;
}