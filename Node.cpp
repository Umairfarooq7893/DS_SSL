#include<iostream>
using namespace std;
// Defining a Node for int values
struct Node1{
    int data1;
    Node1*next;
};
// Defining a Node for string values
struct Node2{
    string data2;
    Node2*next;
};
int main(){
// creating  node for roll numbers of type Node1
    Node1* roll1 = new Node1();
    Node1* roll2 = new Node1();
    Node1* roll3 = new Node1();
    // initializing the Node1;
    roll1->data1 = 601;
    roll1->next  = roll2;
    roll2->data1 = 602;
    roll2->next  = roll3;
    roll3->data1 = 603;
    roll3->next  = NULL;
// creating node for admission numbers of type Node1
    Node1*adm1 = new Node1();
    Node1*adm2 = new Node1();
    Node1*adm3 = new Node1();
    // initializing the Node2;
    adm1->data1 = 701;
    adm1->next  = adm2;
    adm2->data1 = 702;
    adm2->next  = adm3;
    adm3->data1 = 703;
    adm3->next  = NULL;

// creating node for Names of type Node2
    Node2*name1 =new Node2();
    Node2*name2 =new Node2();
    Node2*name3 =new Node2();
    // initializing the Node2
    name1->data2 = "Umair";
    name1->next  = name2;
    name2->data2 = "Kamran";
    name2->next  = name3;
    name3->data2 = "Adnan";
    name3->next  = NULL;

// 1 Display Roll Numbers (without loop)
cout<<"Roll Numbers: ";
cout<<roll1->data1<<" ";
cout<<roll2->data1<<" ";
cout<<roll3->data1<<" "<<endl;


// 2 Display Admission Numbers (with loop)
cout<<"Admission Numbers: ";
Node1* temp1 = adm1;

while(temp1 != NULL){
    cout<<temp1->data1<<" ";
    temp1 = temp1->next;
}
    cout<<"\n";

// 3 Display Names (with loop)
cout<<"Names: ";
Node2* temp2 = name1;

while(temp2 != NULL){
    cout<<temp2->data2<<" ";
    temp2 = temp2->next;
}

}