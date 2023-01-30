#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[],int size){
    for(int i = size-1 ;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int swaparray(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }   
}

int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    reverseArray(arr,size);
    cout<<endl;
    int a[5] = {2,4,6,3,8};
    swaparray(a,5);
    printarray(a,5);
    return 0;
}