#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmallerelement(vector<int>& arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans;
    for(int i = n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        arr[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevsmallerelement(vector<int>& arr, int n){
	stack<int> s;
    s.push(-1);

    vector<int> ans;
    for(int i = 0; i<n;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        arr[i] = s.top();
        s.push(i);
    }
    return ans;
}
// vector<int> max(vector<int> &area,vector<int>& newArea){

// }
vector<int> largestrectanglearea(vector<int>& heights){
    int n = heights.size();
            
    vector<int> next(n);
    next = nextsmallerelement(heights,n);

	vector<int> prev(n);
    prev = prevsmallerelement(heights,n);

    int area = INT_MIN;
    for(int i = 0;i<n;i++){
		int l = heights[i];
		if(next[i] == -1){
            next[i] = n;
        }
		int b = next[i] - prev[i] - 1;
        int newArea = l*b;
        area = max(area, newArea);
    }
    return area;
}


int main(){
	int height[] = { 6, 2, 5, 4, 5, 1, 6 };
	cout << "Maximum area is " << largestrectanglearea(height);
	return 0;
}

// C++ program to find maximum rectangular area in
// linear time
// #include <bits/stdc++.h>
// using namespace std;

// int getMaxArea(int hist[], int n)
// {
// 	stack<int> s;

// 	int max_area = 0;
// 	int tp;
// 	int area_with_top; 

// 	int i = 0;
// 	while (i < n) {
// 		if (s.empty() || hist[s.top()] <= hist[i])
// 			s.push(i++);

// 		else {
// 			tp = s.top();
// 			s.pop();

// 			area_with_top
// 				= hist[tp]
// 				* (s.empty() ? i : i - s.top() - 1);

// 			if (max_area < area_with_top)
// 				max_area = area_with_top;
// 		}
// 	}

// 	while (s.empty() == false) {
// 		tp = s.top();
// 		s.pop();
// 		area_with_top
// 			= hist[tp] * (s.empty() ? i : i - s.top() - 1);

// 		if (max_area < area_with_top)
// 			max_area = area_with_top;
// 	}

// 	return max_area;
// }
// // Driver code
// int main()
// {
// 	int hist[] = { 6, 2, 5, 4, 5, 1, 6 };
// 	int n = sizeof(hist) / sizeof(hist[0]);
// 	cout << "Maximum area is " << getMaxArea(hist, n);
// 	return 0;
// }

