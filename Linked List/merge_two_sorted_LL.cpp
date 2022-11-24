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
// InsertionPart
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
// PrintgPart
void printhead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

Node* solve(Node* &first,Node* &second){

    if(first->next == NULL){
        first -> next = second;
        return first;
    }
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;

    while( next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1 ->next;

            if(next1 == NULL){
                curr1 ->next = curr2;
                return first;
            }
        }
    }
    return first;
}

// MergingPart
Node* mergeLL(Node* &first,Node* &second){
    // if list is empty 
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    // checking which list first element is small 
    if(first->data < second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }
}

int main(){
    Node * result = NULL;
    Node* n1 = new Node(5);
    Node* head1 = n1;
    Node* tail1 = n1;
    insertAtTail(tail1,10);
    insertAtTail(tail1,15);
    insertAtTail(tail1,20);
    cout<<"First list is ";
    printhead(head1);
    cout<<endl;

    Node* n2 = new Node(7);
    Node* head2 = n2;
    Node* tail2 = n2;
    insertAtTail(tail2,13);
    insertAtTail(tail2,17);
    cout<<"Second list is ";
    printhead(head2);
    cout<<endl;
    result = mergeLL(head1,head2);
    printhead(result);
}
