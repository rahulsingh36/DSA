#include <bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i =0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    
    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout <<"Enter the key : ";
    cin >> key;
    if(search(arr,size,key)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}