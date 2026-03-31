#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node*head = NULL;
// Delete at beginning
void deleteBeg(){
    if(head == NULL){
    cout<<"List is Empty";
    return;
    }

    //otherwise
    Node* temp = head;   // linked list starts
    head = head->next;   // move head to next node
    delete temp;         // delete old head that is temp
}

// Delete at end
void deleteEnd(){
    if(head == NULL){
        cout<<"list is empty";
    return;
    }

    // if only one node
    if(head->next == NULL){
        delete head;
        head = NULL;  // update head with NULL
        return;
    }
    //otherwise
    Node* temp = head;
    // move to second last node
    while(temp->next->next != NULL){
        temp = temp->next; // shift temp forward
    }
    // now temp is at second last node
    delete temp->next; //delete last node
    temp->next = NULL; //update new last Node
}

// Delete at position
void deletePos(int pos){
    if(pos == 1){
        deleteBeg();
        return;
    }
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    //otherwise
    Node* temp = head; // list starts
    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL){  // bez temp must exist
        cout << "Invalid position";
        return;
    }
    // temp is at (pos-1)th node
    Node* del = temp->next;   // create new node del
    temp->next = del->next;   // link temp with del
    delete del;               // delete temp
}

void display(){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){

    head = new Node{1,NULL};
    head->next = new Node{2,NULL};
    head->next->next = new Node{3,NULL};
    head->next->next->next = new Node{4,NULL};
    head->next->next->next->next = new Node{5,NULL};
    deleteBeg();
    deletePos(2);
    deleteEnd();

    display();
    return 0;
}