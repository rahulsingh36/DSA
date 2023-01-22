#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cout<<"Enter the number : ";
    cin>>a;

    if(a>='a' && a<='z'){
        cout<<"The character is lowercase"<<endl;
    }
    else if(a>='A'&& a<='Z'){
        cout<<"The character is uppercase"<<endl;
    }
    else{
        cout<<"The character is a number"<<endl;
    }
}