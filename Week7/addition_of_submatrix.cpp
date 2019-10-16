//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Addition of submatrix

TC - O(nm)
SC - O(1)

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, m, n, e;
	int x1, y1, x2, y2;

	cin >> t;
	while (t--) {
		cin >> n >> m;
		int c[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> c[i][j];
			}
		}

		cin >> x1 >> y1 >> x2 >> y2;

		unsigned long sum = 0;
		for (int i = x1-1; i < x2; i++) {
			for (int j = y1 - 1; j < y2; j++) {
				sum += c[i][j];
			}
		}

		cout << sum << '\n';
	}

	return 0;
}