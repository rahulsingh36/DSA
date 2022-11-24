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
    // ~Node(){
    //     int value = this->data;
    //     if(this->next != NULL){
    //         delete next;
    //         this-> next = NULL; 
    //     }
    // }
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

void insertAtTail(Node* &tail,Node* current){
    tail->next = current;
    tail = current;
}

void printhead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
// sorting by data replacement
void sortingList(Node* &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp ->data ==0){
            zeroCount++;
        }
        else if(temp ->data ==1){
            oneCount++;
        }
        else if(temp ->data ==2){
            twoCount++;
        }
        temp = temp ->next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
}

//sorting by links replacement
void sortingLL(Node* &head){
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;
    Node* current = head;
    while (current != NULL)
    {
        int value = current ->data;
        if(value == 0){
            insertAtTail(zerotail,current);
        }
        else if(value == 1){
            insertAtTail(onetail,current);
        }
        else if(value == 2){
            insertAtTail(twotail,current);
        }
        current = current -> next;
    }

    // Merging
    if(onehead->next != NULL){
        zerotail->next = onehead->next;
    }
    else{
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next == NULL;

    head = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;
    
    // return head;
}

int main(){
    Node* head = new Node(2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtHead(head,2);
    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,0);
    printhead(head);
    cout<<endl;
    sortingLL(head);
    printhead(head);
}