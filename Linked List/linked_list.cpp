#include <bits/stdc++.h>
using namespace std;

bool checkUniqueFrequency(int arr[],int n)
{
	unordered_map<int, int> freq;
	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}

	unordered_set<int> uniqueFreq;
	for (auto& i : freq) {
		if (uniqueFreq.count(i.second))
			return false;
		else
			uniqueFreq.insert(i.second);
	}
	return true;
}

// Driver Code
int main()
{
	int arr[] = { 1, 1, 2, 5, 5 };
	int n = sizeof arr / sizeof arr[0];
	bool res = checkUniqueFrequency(arr, n);

	if (res)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
