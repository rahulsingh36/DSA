// C++ code to print Inverted Pyramid Pattern using
// recursion
#include <bits/stdc++.h>
using namespace std;

void pypart(int n)
{
	if (n == 0) {
		return;
	}
	for (int i = 1; i <= n; i++) {
		cout << "* ";
	}
	cout << endl;
	pypart(n - 1);
}

// driver function
int main()
{
	int n = 5;
	pypart(n);
	return 0;
}
// This code is contribured by Shivesh Kumar Dwivedi
