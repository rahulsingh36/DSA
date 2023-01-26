#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int star = 1;star<=n-i;star++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int k = 1;k<i;k++){
            cout<<i-k;
        }
        cout<<endl;
    }
}