#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
Node*head = NULL;             // start of list
// Traversal fxn
void display(){
    Node* temp = head;        // start from head
    while(temp != NULL){      // traverse till after last node
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    head = new Node{1,NULL};
    head->next = new Node{2,NULL};
    head->next->next = new Node{3,NULL};
    head->next->next->next = new Node{4,NULL};

    display();
}