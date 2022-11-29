#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int *arr;
        int size;
        int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;  
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

    st.push(20);
    st.push(50);
    st.push(40);

    cout<<"Top element is "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element is "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element is "<<st.peek()<<endl;
    st.pop();

    if(st.empty()){
        cout<<"The stack is empty";
    }
    else{
        cout<<"The stack is not empty";
    }
    

}