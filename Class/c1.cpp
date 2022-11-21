#include<iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans;
        for(int i=0;i<31;i++){
            int ans=pow(2,i);
            if(ans==n){
                return true;
                break;
            }
            // else{
            //     return false;
            // }
        }
        return false;
    }
};

int main(){
    Solution s1;
    int ans = s1.isPowerOfTwo(1);
    if(ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}