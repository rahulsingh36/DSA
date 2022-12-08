#include <bits/stdc++.h>
using namespace std;

void solve(stack<char> &inputstack, int count,int size){
    //base case
    if(count == size/2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();

    // recursive call

    solve(inputstack,count+1,size);
    inputstack.push(num);

}
void deletemiddle(stack<char> &inputstack, int n){
    int count = 0; 
    solve(inputstack,count,n);
}


int main(){
    stack<char> st;
 
    //push elements into the stack
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
 
    deletemiddle(st, st.size());
 
    // Printing stack after deletion
    // of middle.
    while (!st.empty())
    {
        char p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;

}