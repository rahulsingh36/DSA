// C++ code to demonstrate star pattern using reccursion
#include <iostream>
using namespace std;

// reccursive function to demonstrate printing pattern
void pypart2(int n)
{
	// base case
	if (n == 0) {
		return;
	}
	else {
		// calling function reccursively
		pypart2(n - 1);

		// print "* " n times
		for (int i = 0; i < n; i++) {
			// Printing stars
			cout << "* ";
		}
		// Ending line after each row
		cout << endl;
	}
}

// Driver Function
int main()
{
	int n = 5;
	pypart2(n);
}
// this code is contributed by Shivesh Kumar Dwivedi
