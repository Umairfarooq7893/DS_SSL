/*
    display()
    Prints all nodes.
    Start from head and move until NULL.
*/
#include <iostream>
using namespace std;

//Definition of nodes
struct Node1 {
    int data;
    Node1* next;
};
struct Node2 {
    string name;
    Node2* next;
};

int main() {
    // Creating node manually
    Node1* head    = new Node1();
    Node1* second  = new Node1();
    Node1* third   = new Node1();
    Node1* fourth  = new Node1();
    Node1* fifth   = new Node1();
    // initialising nodes
    head->data   = 1;
    head->next   = second;
    second->data = 3;
    second->next = third;
    third->data  = 4;
    third->next  = fourth;
    fourth->data = 5;
    fourth->next = fifth;
    fifth->data  = 6;
    fifth->next  = NULL;
    // displaying using loop
    Node1* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}