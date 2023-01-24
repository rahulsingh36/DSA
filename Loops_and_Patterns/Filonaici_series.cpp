#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int a = 0,b =1;
    cout<<a<<" "<<b<<" ";
    for(int i =0; i<n;i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<sum<<" ";
    }
}