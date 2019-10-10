//-------------------------------------------------
/*
Problem - Left rotate matrix k times

TC - O(mn) -> to display
SC - O(1)

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, m, k;
	
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		int matrix[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> matrix[i][j];
			}
		}	

		k %= n;//if k > n, after n rotations matrix back to original
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << matrix[i][(j+k)%n] << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}