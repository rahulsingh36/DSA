#include <bits/stdc++.h>
using namespace std;

// Singly linked list
class Node{
    public:
    int data;
    Node* next;
    Node* random;

    // using constructor 
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> random = NULL;
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
Node* cloneLinkedListByCopy(Node* head){
    // create a clone list 
    Node* clonehead = NULL;
    Node* clonetail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(clonehead,clonetail,temp->data);
        temp = temp ->next;
    }

    Node* originalNode = head;
    Node* cloneNode = clonehead;
    while(originalNode != NULL && cloneNode != NULL){
        Node* next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode -> next = originalNode;
        cloneNode = next;

    }

    // random pointer copy
    temp = head;
    while(temp != NULL){
        if(temp->next != NULL){
            temp->next->random = temp ->random ? temp->random->next : temp->random;
        } 
        temp = temp ->next->next;
    }

    // revert changes done in part 2

    originalNode = head;
    cloneNode = clonehead;
    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next;
    }

    // returning answer
    return clonehead;
}

int main()
{
	// Creating a linked list with random pointer
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	head->random = head->next->next;
	head->next->random = head;
	head->next->next->random = head->next->next->next->next;
	head->next->next->next->random = head->next->next;
	head->next->next->next->next->random = head->next;

	// Print the original list
	cout << "The original linked list:\n";
	printhead(head);

	// Function call
	Node* sol = cloneLinkedListByCopy(head);
    cout<<endl;
	cout << "The cloned linked list:\n";
	printhead(sol);

	return 0;
}