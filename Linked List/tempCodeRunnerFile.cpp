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
};
void insertAtHead(Node* &head, int d){
    if(head == NULL){
        Node* temp  = new Node(d);
        temp -> next = head;
        head = temp;
    }
    Node* temp  = new Node(d);
    temp -> next = head;
    head = temp;
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
