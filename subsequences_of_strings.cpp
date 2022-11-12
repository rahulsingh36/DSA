#include<iostream>
using namespace std;

void solve(string arr, string output,int index, string & ans){
     if (index >= arr.length()){
        if (output.length()>0){
            ans.push_back(output);
        }
        return ;
     }
     solve(arr, output,index+1,ans);

     char element = arr[index];
     output.push_back(element);
     solve(arr, output,index+1,ans);
}

string sebsequences(string arr){
    string ans;
    string output ="";
    int index = 0;
    solve(arr,output,index,ans);
    return ans;
}

int main(){
    string arr = "abc";
    int n = 3;
    cout<< sebsequences(arr) <<" ";
}