#include <bits/stdc++.h>
using namespace std;
int min(int arr[],int size){
    int min = INT_MAX;
    for(int i =0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The min number is "<<min<<endl;
}

int max(int arr[],int size){
    int max = INT_MIN;
    for(int i =0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"The max number is "<<max<<endl;
}
int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    min(arr,size);
    max(arr,size);
    return 0;
}