#include <bits/stdc++.h>
using namespace std;

bool redundant(string &s){
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            if(ch == ')'){
                bool isredundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isredundant = false;
                    }
                    st.pop();
                }
                if(isredundant){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main(){
    string st = "(a+b)";
    if(redundant(st)){
        cout<<"The expression is redundant"<<endl;
    }
    else{
        cout<<"The expression is not a redundant"<<endl;
    }

}
