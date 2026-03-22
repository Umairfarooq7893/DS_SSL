#include <iostream>
using namespace std;

struct Node{
    int data;      // node value
    Node* next;    // pointer to next node
};

Node* head = NULL;   // start of list

// Insert at beginning
void insertBeg(int val){
    Node* newNode = new Node(); // create new node
    newNode->data = val;        // assign value
    newNode->next = head;       // link to current head
    head = newNode;             // update head to new node
}
// Insert at end
void insertEnd(int val){
    Node* newNode = new Node(); // create new node
    newNode->data = val;        // assign value
    newNode->next = NULL;       // making it last node

    // if list is empty
    if(head == NULL){
        head = newNode;         // first node becomes head
    }else{
        Node* temp = head;      // start from head

        // traverse to last node
        while(temp->next != NULL){  // till last node
            temp = temp->next;      // shift temp forward
        // now temp is at last node
        }
        temp->next = newNode;   //link last node to new node
    }
}

// Insert at position
void insertPos(int val, int pos){
    if(pos == 1){
        insertBeg(val); // reuse insert at beginning
        return;
    }
    //otherwise
    Node* newNode = new Node(); // create new node
    newNode->data = val;        // store data

    Node* temp = head;  // linked list starts
    // move temp to (pos-1)th node
    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next; // shift temp forward
    }
    if(temp == NULL){
        cout << "Invalid position" << endl;
        return;
    }
    // now temp is at (pos-1)th node
    newNode->next = temp->next;  // connect new node to next node
    temp->next = newNode;        // connect previous node to new node
}
// Display list
void display(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    head = new Node{2,NULL};
    head->next = new Node{3,NULL};
    head->next->next= new Node{4,NULL};
    insertBeg(1);
    insertPos(5, 5);

    cout << "Linked List: ";
    display();

    return 0;
}