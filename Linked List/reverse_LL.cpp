#include<iostream>
using namespace std;
#include<string.h>

// Singly linked list
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

void insertAtHead(Node* &head, int d){
    Node* temp  = new Node(d);
    temp -> next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
void printtail(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

void reverseLL(Node* &head){
    // if(head == NULL || head -> next == NULL){
    //     return ;
    // }
    Node* prev  = NULL;
    Node* cur = head;
    Node* forward = NULL;

    while(cur != NULL){
        forward = cur ->next;
        cur ->next = prev;
        prev = cur;
        cur = forward;
    }
    head = prev;
}

int main(){

    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    printtail(head);
    cout<<endl;
    reverseLL(head);
    printtail(head);
}