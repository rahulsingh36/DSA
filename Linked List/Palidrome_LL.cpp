#include<iostream>
using namespace std;
#include<string.h>
#include <bits/stdc++.h>
#include <vector>

// Singly linked list
class Node{
    private:
    
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
// first method 
bool checkpalidrome(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool ispalidrome(Node* &head){
    vector<int> arr ;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp -> next;
    }
    return checkpalidrome(arr);
}

// second method 
Node* getmid(Node* & head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast -> next;
        if(fast->next != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
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
bool checkingpalidrome(Node* &head){
    if(head == NULL || head->next == NULL){
        return true;
    }
    Node* middle = getmid(head);
    Node* temp = middle ->next ;
    middle -> next = reverse(temp);

    Node* head1 = head;
    Node* head2 = middle->next;
    while(head2 != NULL){
        if(head1->data != head2 ->data ){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = middle ->next ;
    middle -> next = reverse(temp);

    return true;
    
}

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

int main(){
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;
    // insertAtHead(head,1);
    insertAtTail(tail,9);
    insertAtTail(tail,1);
    insertAtTail(tail,9);
    insertAtTail(tail,1);
    printhead(head);
    cout<<endl;
    if(checkingpalidrome(head)== true){
        cout<<"The no. is palidrome";
    }
    else{
        cout<<"The no. is not palidrome";
    }
}
