#include <bits/stdc++.h>
using namespace std;

int isEven(int n){
    int tag = false;
    if(n%2 == 0){
        tag = true;
    }

    return tag;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = isEven(n);
    if(ans){
        cout<<"The number is Even"<<endl;
    }
    else{
        cout<<"The number is Odd"<<endl;
    }
    return 0;
}