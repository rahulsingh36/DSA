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
void printhead(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

Node* findmid(Node* &head){
    Node* slow = head;  
    Node* fast = head-> next;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next->next;
        slow = slow -> next;
    }
    return slow;
}
Node* merge(Node* &left, Node* &right){
    if(left == NULL){
        return right;
    }
    else  if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL){
        if(left -> data <= right ->data){
            temp -> next = left;
            temp = left;
            left = left ->next;
        }
        else{
            temp ->next =right;
            temp = right;
            right = right -> next;
        }
    }
    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left ->next;
    }
    while(right != NULL){
        temp ->next =right;
        temp = right;
        right = right -> next;
    }
    ans = ans -> next;
    return ans;
}
Node* mergesort(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* mid = findmid(head);
    Node* left = head;
    Node* right = mid-> next;
    mid -> next = NULL;

    // recursive call  

    left = mergesort(left);
    right = mergesort(right);

    Node* result = merge(left,right);
    return result;
}

int main(){
    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;
    insertAtTail(tail,25);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,10);
    printhead(head);
    cout<<endl;
    cout<<"The sorted list is\n";
    mergesort(head);
    printhead(head);
}
