#include<iostream>
using namespace std;

void solve(string digit, string output,int index, string & ans, string mapping){
    // base case
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }
    int number = digit[index]-'0';
    string value = mapping[number];
    for(int i = 0;i<value.length(); i++){
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}

string lettercombination(string digits){
    string ans;
    if(digit.length() == 0){
        return ans;
    }
    string output = "";
    int index = 0;
    string mapping[10] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}

int main(){
    string digit = "23";
    cout<< lettercombination(digit) <<" ";

}