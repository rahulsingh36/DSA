#include <bits/stdc++.h>
using namespace std;

// Singly linked list
class Node{
    public:
    int data;
    Node* next;
    Node* right ,* down;

    // using constructor 
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> right = NULL;
        this -> down = NULL;
    }
};
Node* head = NULL;
Node* push(Node* &head, int d){
    Node* temp  = new Node(d);
    if(head == NULL){
        temp -> next = head;
        head = temp;
    }
    else{
        temp -> next = head;
        head = temp;
    }
    return temp;
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
        temp = temp -> down;
    }
}
Node* merge(Node* &left, Node* &right){
    if(left == NULL){
        return right;
    }
    else  if(right == NULL){
        return left;
    }

    Node* temp;
    if(left -> data < right ->data){
        temp = left;
        temp->down = merge(left->down, right);
    }
    else{
        temp = right;
        temp->down = merge(left, right->down);
    }
    temp -> right = NULL;
    return temp;
}
Node* flattenList(Node* &head){
    if(head == NULL || head -> right == NULL){
        return head;
    }
    // recursive call  
    head->right = flattenList(head->right);

    Node* result = merge(head,head->right);
    return result;
}
int main(){
    // Node* head = new Node(30);
    head = push(head, 30);
    head = push(head, 8);
    head = push(head, 7);
    head = push(head, 5);
 
    head->right = push(head->right, 20);
    head->right = push(head->right, 10);
 
    head->right->right = push(head->right->right, 50);
    head->right->right = push(head->right->right, 22);
 
    head->right->right->right
        = push(head->right->right->right, 45);
    head->right->right->right
        = push(head->right->right->right, 40);
    head->right->right->right
        = push(head->right->right->right, 35);
    head->right->right->right
        = push(head->right->right->right, 20);
    
    flattenList(head);
    printhead(head);

}
