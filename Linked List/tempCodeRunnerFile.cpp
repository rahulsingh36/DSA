#include <bits/stdc++.h>
using namespace std;


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
    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;
    insertAtTail(tail,10);
    insertAtTail(tail,25);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    insertAtTail(tail,10);
    printhead(head);
}
