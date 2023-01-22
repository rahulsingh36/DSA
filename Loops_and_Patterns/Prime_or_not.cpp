#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool tag = true;
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            tag = false;
        }
    }

    if(tag == false){
        cout<<"The no is no prime"<<endl;
    }
    else{
        cout<<"The no is prime"<<endl;
    }
}