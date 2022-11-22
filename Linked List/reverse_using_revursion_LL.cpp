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

Node* reverseLL(Node* &head, int k){
    if(!head){
        return NULL;
    }

    Node* prev  = NULL;
    Node* cur = head;
    Node* next = NULL;
    int cnt = 0;
    while(cur != NULL && cnt < k){
        next = cur ->next;
        cur ->next = prev;
        prev = cur;
        cur = next;
        cnt++;
    }

    if(next != NULL){
        head->next = reverseLL(next,k);
    }
    head = prev;
    return prev;
}

void insertAtTail(Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}
    

void printtail(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

int main(){

    Node* n1 = new Node(10);
    Node* tail = n1;
    Node* head = n1;
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    insertAtTail(tail, 35);
    printtail(head);
    cout<<endl;
    reverseLL(head,2);
    printtail(head);
}