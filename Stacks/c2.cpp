// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function that finds the value of
// Binomial Coefficient C(n, k)
unsigned long int
binomialCoeff(unsigned int n,
			unsigned int k)
{
	unsigned long int res = 1;

	// Since C(n, k) = C(n, n - k)
	if (k > n - k)
		k = n - k;

	// Calculate the value of
	// [n*(n - 1)*---*(n - k + 1)] /
	// [k*(k - 1)*---*1]
	for (int i = 0; i < k; ++i) {
		res *= (n - i);
		res /= (i + 1);
	}

	// Return the C(n, k)
	return res;
}

// Binomial coefficient based function to
// find nth catalan number in O(n) time
unsigned long int catalan(unsigned int n)
{
	// Calculate value of 2nCn
	unsigned long int c
		= binomialCoeff(2 * n, n);

	// Return C(2n, n)/(n+1)
	return c / (n + 1);
}

// Function to find possible ways to
// put balanced parenthesis in an
// expression of length n
unsigned long int findWays(unsigned n)
{
	// If n is odd, not possible to
	// create any valid parentheses
	if (n & 1)
		return 0;

	// Otherwise return n/2th
	// Catalan Number
	return catalan(n / 2);
}

void countNonNPeriodic(int N)
{

	// Difference between counting ways
	// of 2*N and N is the result
	cout << findWays(2 * N)
				- findWays(N);
}

// Driver Code
int main()
{
	// Given value of N
	int N = 4;

	// Function Call
	countNonNPeriodic(N);

	return 0;
}
