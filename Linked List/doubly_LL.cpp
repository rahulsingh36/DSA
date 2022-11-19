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

void insertAtposition(Node* &tail,Node* &head,int position, int d){
    // inserting at 1
    if(position == 1){
        insertAtHead(head,d);
    }
    Node* temp = head;  
    int count = 1;
    
    while(count <position - 1){
        temp = temp -> next;
        count++;
    }
    
    // inserting at last 
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp -> next -> pre = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->pre = temp;

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

// Finding length 

int findlength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp!= NULL){
        length++;
        temp = temp->next;
    }
    return length;
}



int main(){
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    printH(head);
    cout<<findlength(head)<<endl;
    insertAtHead(head,2);
    printH(head); 
    insertAtHead(head,11);
    printH(head); 
    insertAtHead(head,21);
    printH(head); 
    insertAtTail(tail, 50);
    printH(head);

    insertAtposition(tail,head,2,100);
    printH(head);

}