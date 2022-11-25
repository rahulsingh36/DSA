#include<iostream>
using namespace std;
#include<string.h>
#include<vector>
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
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL; 
        }
    }
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
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail == NULL){
        Node* temp  = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
    
}
void printhead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

Node* reverse(Node* &head){
    Node* prev  = NULL;
    Node* cur = head;
    Node* next = NULL;

    while(cur != NULL){
        next = cur ->next;
        cur ->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
Node* add(Node* &first, Node* &second){
    Node* anshead = NULL;
    Node* anstail = NULL;
    int carry = 0;
    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if(first != NULL){
            val1 = first ->data;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second ->data;
        }

        int sum = carry + val1 + val2;
        int digit = sum %10;
        insertAtTail(anshead,anstail,digit);
        carry = sum/10;

        if(first != NULL){
            first = first->next;
        }
        if(second != NULL){
            second = second ->next;
        }
    }
    return anshead;
    
}
Node* addnumber(Node* &first, Node* &second){
    // reverse linked list 
    first = reverse(first);
    second = reverse(second);

    // add linked list 
    Node* ans = add(first,second);

    // reverse ans list 
    Node* result = reverse(ans);

    return result;
}

int main(){
    Node* n1 = new Node(5);
    Node* head1 = n1;
    Node* tail1 = n1;
    insertAtTail(head1,tail1,3);
    insertAtTail(head1,tail1,2);
    // insertAtTail(head1,tail1,15);
    // insertAtTail(head1,tail1,20);
    printhead(head1);
    cout<<endl;
    Node* n2 = new Node(9);
    Node* head2 = n2;
    Node* tail2 = n2;
    insertAtTail(head2,tail2,4);
    insertAtTail(head2,tail2,5);
    // insertAtTail(head2,tail2,15);
    // insertAtTail(head2,tail2,20);
    printhead(head2);
    cout<<endl;

    Node* result = addnumber(head1,head2);
    cout<<"The sum is ";
    printhead(result);
}
