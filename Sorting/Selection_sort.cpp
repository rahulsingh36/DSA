#include<iostream>
#include<math.h>
using namespace std;
#include<string.h>

int selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[5]={16,22,43,24,5};
int ans1=selectionSort(arr,5);
printArray(arr,5);
}
