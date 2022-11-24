#include<iostream>
using namespace std;
#include<string.h>
#include<map>

// Singly linked list
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // using constructor 
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL; 
        }
    }
};
void insertAtHead(Node* &head, int d){
    if(head == NULL){
        Node* temp  = new Node(d);
        temp -> next = head;
        head = temp;
    }
    else{
        Node* temp  = new Node(d);
        temp -> next = head;
        head = temp;
    }
}
void insertAtTail(Node* &tail, int d){
    if(tail == NULL){
        Node* temp  = new Node(d);
        tail->next = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
    
}
void printhead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,25);
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtHead(head,25);
    insertAtHead(head,10);
    printhead(head);
}
