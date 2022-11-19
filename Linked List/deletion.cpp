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

    // using destructor 
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL; 
        }
    }
};
// Inserting Nodes 
void insertAtHead(Node* &head, int d){
    Node* temp  = new Node(d);
    temp -> next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail -> next;
}

// deleting nodes 
void deletioninnode(int position,Node* &head){
    if(position ==1){
        Node* temp = head;
        head = head->next;
        temp ->next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* per = NULL;
         int cnt = 1;
         while(cnt< position){
            per = current;
            current = current ->next;
            cnt++;
         }
        per->next = current->next;
        current->next = NULL;
        delete current;
    }
}

// Printing Nodes 
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

    cout<< "head is "<<head->data<<endl;
    cout<< "tail is "<<tail->data<<endl;

    deletioninnode(3,head);
    printtail(head);
    cout<<endl;

    cout<< "head is "<<head->data<<endl;
    cout<< "tail is "<<tail->data<<endl;
}