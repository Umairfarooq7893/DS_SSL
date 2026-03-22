#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
};
Node*head = NULL;
// Search
void search(int key){
    Node*temp = head;  // declaring temp that starts from head

    int pos = 1;       // declaring position and starts from 1
     
    while(temp != NULL){ //till after last node
        if(temp->data == key){
            cout << "Value found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Value not found" << endl;
}
int main(){
    head = new Node{1,NULL};
    head->next = new Node{2,NULL};
    head->next->next = new Node{3,NULL};
    head->next->next->next = new Node{4,NULL};

    search(4);
}