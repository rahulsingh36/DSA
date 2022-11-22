#include<iostream>
using namespace std;
#include<string.h>

class Node{
    public:
    int data;
    Node* next;

    // using constructor 
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertnode(Node* &tail , int element, int d){
    if(tail == NULL){
        Node* n1 = new Node(d);
        tail = n1;
        n1 -> next = n1;
    }
    else{
        // assuming that the element is in the list
        // non empty list
        Node* current = tail;
        while(current -> data != element){
            current = current -> next;
        }
        // element found

        Node* temp = new Node(d);
        temp -> next = current->next;
        current-> next = temp;
    }
}

int printnode(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
        }
        while(tail != temp);
        cout<<endl;
    }

bool iscircularlist(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp ->next;
    }
    if(temp == head){
        return true;
    }
    
    return false;
}

int main(){
    Node* tail = NULL;
    // insertnode(tail,5, 3);
    // printnode(tail);
    // insertnode(tail,3, 5);
    // printnode(tail);
    // insertnode(tail,5, 7);
    // printnode(tail);
    // insertnode(tail,7, 10);
    // printnode(tail);

    if(iscircularlist(tail)){
        cout<<"The list is circular Linked list";
    }
    else{
        cout<<"The list is not circular";
    }
}