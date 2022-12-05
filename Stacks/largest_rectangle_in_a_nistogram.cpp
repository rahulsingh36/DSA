#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
        vector<int> nextsmallerelement(vector<int>& heights, int size){
            
        }
        vector<int> prevsmallerelement(vector<int>& heights, int size){

        }
        int largestrectanglearea(vector<int>& heights){
            int n = heights.size();
            
            vector<int> next(n);
            next = nextsmallerelement(heights,n);

            vector<int> prev(n);
            prev = prevsmallerelement(heights,n);

            int area = INT_MIN;
            for(int i = 0;i<n;i++){
                int l = heights[i];
                int b = next[i] - prev[i] - 1;
                if(next[i] == -1){
                    next[i] = n;
                }

                int newArea = l*b;
                area = max(area, newArea);
            }
        return area;
        }
};

int main(){

}
