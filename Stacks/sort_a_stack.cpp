#include <bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int>& stack, int element){
    if(stack.empty() || (!stack.empty() && stack.top()<element)){
        stack.push(element);
        return;
    }
    int n = stack.top();
    stack.pop();

    sortedinsert(stack,element);
    stack.push(n);
}

void sortstack(stack<int>& stack){
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    
    sortstack(stack);

    sortedinsert(stack,num);
}

int main(){
    stack<int> st; 
    //push elements into the stac
    st.push(11);
    st.push(2);
    st.push(-3);
    st.push(55);
 
    sortstack(st);
 
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
