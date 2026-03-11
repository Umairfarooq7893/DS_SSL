/*
    Author : Umair Farooq
    program: Introduction of Linked list
*/
/*
    Defination
        A Linked List is a linear data structure where elements (called nodes) 
        are connected using pointers, not stored in continuous memory like arrays.

    Structure of a Node
        Each node has two parts:
        1. Data → stores the value
        2. Next pointer → stores the address of the next node

        The first node is called Head.
        The last node points to NULL.    
*/ 
#include <iostream>
using namespace std;

//  Define a Node
struct Node{
    int data;      // stores value
    Node* next;    // pointer to next node
};

int main()
{
    // Create Nodes
    Node* first  = new Node();
    Node* second = new Node();
    Node* third  = new Node();

    // Store Data
    first->data = 10;
    second->data = 12;
    third->data = 14;

    first->next = second;
    second->next = third;
    third->next = NULL;

    // Display Data
    cout << first->data << endl;
    cout << second->data << endl;
    cout << third->data << endl;

    return 0;
}