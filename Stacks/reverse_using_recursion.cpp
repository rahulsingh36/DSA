#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int>& s,int element){
 //base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    // recursive call

    insertatbottom(s,element);
    s.push(num);
} 

void reversestack(stack<int>& s){
    // base case
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call 
    reversestack(s);
    insertatbottom(s,num);
}
int main(){
    stack<int> st; 
    //push elements into the stac
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
 
    reversestack(st);
 
    // Printing stack after deletion
    // of middle.
    while (!st.empty())
    {
        int p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
