#include <bits/stdc++.h>
using namespace std;

int main(){
    // creation
    stack<int> s;

    // Data pushing
    s.push(10);
    s.push(5);

    // data deleteing
    s.pop();

    // geting top element 
    cout<<"The top element is "<<s.top()<<endl;
    
    // checking empty 
    if(s.empty()){
        cout<<"The stack is empty";
    }
    else{
        cout<<"The stack is not empty";
    }
}