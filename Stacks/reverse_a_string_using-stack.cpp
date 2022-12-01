#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "rahul";
    cout<<"The inserted string is "<<str<<endl;
    stack <char> s;
    
    for(int i= 0; i<str.length();i++){
        char temp = str[i];
        s.push(temp);
    }

    string ans = "";
    while(!s.empty()){
        char temp = s.top();
        ans.push_back(temp);

        s.pop();
    }
    
    cout<<"The answer is "<< ans <<endl;
    return 0;
}