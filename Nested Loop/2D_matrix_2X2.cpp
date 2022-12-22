// C++ program that uses nested for loop
// to print a 2D matrix

#include <bits/stdc++.h>
using namespace std;

#define ROW 3
#define COL 3

// Driver program
int main()
{

	int i, j;

	// Declare the matrix
	int matrix[ROW][COL] = { { 1, 2, 3 },
							{ 4, 5, 6 },
							{ 7, 8, 9 } };
	cout << "Given matrix is \n";

	// Print the matrix using nested loops
	for (i = 0; i < ROW; i++) {

		for (j = 0; j < COL; j++)
			cout << matrix[i][j]<<" ";

		cout << "\n";
	}

	return 0;
}
