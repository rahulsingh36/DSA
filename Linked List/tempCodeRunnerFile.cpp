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

void removeduplicate(Node* &head){
    Node* current = head;
    Node* next_next;   
    if(head == NULL){
        return;
    }
    while(current->next != NULL){
        if(current->data == current ->next->data){
            next_next = current->next->next;
            delete (current->next);
            current->next = next_next;
        }
        else{
            current = current->next;
        }
    }
}
void deleteddulpicateusingmap(Node* &head){
    Node *ptr1, *ptr2, *dup;
    ptr1 = head;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
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
    cout<<endl;
    // removeduplicate(head);
    deleteddulpicateusingmap(head);
    printhead(head);
}
