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

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    // inserting at start 
    if(position ==1){
        insertAtHead(head,d);
        return ;
    }
    Node* temp = head;
    int count = 1;
    while(count < position -1){
        temp = temp -> next;
        count++;
    }
    // inserting at last 
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;    
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

int main(){

    Node* n1 = new Node(10);
    Node* head = n1;
    // for tail part 
    cout<<"tail part"<<endl;

    Node* tail = n1;
    printtail(head);
    cout<<endl;

    insertAtTail(tail, 12);
    printtail(head);
    cout<<endl;

    insertAtTail(tail, 20);
    printtail(head);
    cout<<endl;

    insertAtPosition(tail,head,3, 15);
    print(head);
    cout<<endl;
    
    cout<< "head is "<<head->data<<endl;
    cout<< "tail is "<<tail->data<<endl;
    // // for head part 
    // cout<<"head part"<<endl;
    // print(head);
    // cout<<endl;
    // insertAtHead(head, 12);
    // print(head);
    // cout<<endl;
}