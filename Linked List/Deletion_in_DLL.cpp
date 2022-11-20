#include<iostream>
using namespace std;
#include<string.h>

class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int d){
        this->data= d;
        this->next = NULL;
        this->pre = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL; 
        }
    }
};
// Inserting Data

void insertAtHead(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp-> next = head;
        head-> pre = temp;
        head = temp; 
    }
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail-> next = temp;
    temp-> pre = tail;
    tail = temp;
}

// deleting nodes 
void deletioninnode(int position,Node* &head){
    if(position ==1){
        Node* temp = head;
        temp->next->pre = NULL;
        head = temp->next;
        temp ->next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* pre = NULL;
         int cnt = 1;
         while(cnt< position){
            pre = current;
            current = current ->next;
            cnt++;
         }
        current->pre = NULL;
        pre->next = current-> next;
        current->next= NULL;

        delete current;
    }
}

// Printing data 

void printH(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    printH(head);
    insertAtTail(tail,12);
    printH(head); 
    insertAtTail(tail,14);
    printH(head); 
    insertAtTail(tail,16);
    printH(head); 
    insertAtTail(tail, 20);
    printH(head);
    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    cout<<endl;
    deletioninnode(5,head);
    printH(head);
    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
}