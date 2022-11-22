#include<iostream>
using namespace std;
#include<map>
#include<string.h>

class Node{
    public:
    int data;
    Node* next;

    // using constructor 
    public:
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertnode(Node* &tail , int element, int d){
    if(tail == NULL){
        Node* n1 = new Node(d);
        tail = n1;
        n1 -> next = n1;
    }
    else{
        // assuming that the element is in the list
        // non empty list
        Node* current = tail;
        while(current -> data != element){
            current = current -> next;
        }
        // element found

        Node* temp = new Node(d);
        temp -> next = current->next;
        current-> next = temp;
    }
}

int printnode(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail -> next;
        }
        while(tail != temp);
        cout<<endl;
    }

bool iscircularlist(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp ->next;
    }
    if(temp == head){
        return true;
    }
    
    return false;
}

bool detectloop(Node* &head){
    if(head == NULL){
        return true;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while (temp != NULL)
    {
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp-> next;
    }
    return false;
    
}

Node* floydDetectionLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow -> next;
        if(slow == fast){ 
            // cout<<"cycle is  "<< slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectionLoop(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* startofloop = getStartingNode(head);
    Node* temp = startofloop;

    while(temp != startofloop){
        temp = temp ->next;
    }
    temp-> next = NULL;
}

int main(){
    Node* tail = NULL;
    Node* head = NULL;
    insertnode(tail,5, 3);
    // printnode(tail);
    insertnode(tail,3, 5);
    // printnode(tail);
    insertnode(tail,5, 7);
    // printnode(tail);
    insertnode(tail,7, 10);
    printnode(tail);

    // if(detectloop(tail)){
    //     cout<<"Loop is present";
    // }
    // else{
    //     cout<<"Loop is not present";
    // }

    if(floydDetectionLoop(tail) != NULL){
        cout<<"Loop is present";
    }
    else{
        cout<<"Loop is not present";
    }
    cout<<endl;

    Node* loop = getStartingNode(tail);
    cout<<"Starting node of loop is "<< loop -> data <<endl;

    removeLoop(tail);

    if(floydDetectionLoop(tail) != NULL){
        cout<<"Loop is present";
    }
    else{
        cout<<"Loop is not present";
    }
}