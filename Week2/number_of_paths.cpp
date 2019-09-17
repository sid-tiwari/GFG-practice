//-------------------------------------------------
/*
Problem - Number of paths

TC - O(mn)
SC - O(mn)

EBTC - O(mn)
EBSC - O(n) Space-optimization DP

Alternate TODO: Combinatorics
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, m, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n;
		int intermediate[m][n];
		for (int i = 0; i < m; i++) {
			intermediate[i][0] = 1; //1 path for column matrix
		}
		for (int i = 0; i < n; i++) {
			intermediate[0][i] = 1; //1 path for row matrix
		}

		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				intermediate[i][j] = intermediate[i-1][j] + intermediate[i][j-1];
			}
		}
		cout << intermediate[m-1][n-1] << '\n';
	}

	return 0;
}