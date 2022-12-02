#include <bits/stdc++.h>
using namespace std;

bool matches(char &open,char &close){

}

bool validparentheses(string &expression){
    stack <char> s; 
    for(int i =0; i<expression.length(); i++){
        char ch = expression[i];

        // if opening bracket push stack
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        // if closing bracket stacktop() check and pop
        else{
            if(!s.empty()){
                char top = s.top();
                if((ch == ')' && top == '(') ||
                   (ch == ']' && top == '[') ||
                   (ch == '}' && top == '{') ){

                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        } 
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string st = "[{()}]";
    if(validparentheses(st)){
        cout<<"This is a valid expression"<<endl;
    }
    else{
        cout<<"This is not a valid expression"<<endl;
    }
}