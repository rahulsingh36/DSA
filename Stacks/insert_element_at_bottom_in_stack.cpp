#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s,int element){
    //base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    // recursive call

    solve(s,element);
    s.push(num);
}

stack<int> insertelementatbottom(stack<int> &inputstack,int element){
    solve(inputstack,element);
    return inputstack;
}

int main(){
    stack<int> st; 
    //push elements into the stac
    st.push(1);
    st.push(2);
    st.push(3); 
    st.push(4);
 
    insertelementatbottom(st,0);
 
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
