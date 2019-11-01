//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Gold mine problem

TC - O(nm)
SC - O(nm)

EBTC - O(nm)
EBSC - O(nm)
*/
//-------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t, n, m, e;

	cin >> t;
	while (t--) {
		cin >> n >> m;
		int mine[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> mine[i][j];
			}
		}

		int dptable[n][m];
		memset(dptable, 0, sizeof(dptable));

		int right, diag_up, diag_down;
		for (int j = m-1; j >= 0; j--) {
			for (int i = 0; i < n; i++) {
				
				if (j == m-1) right = 0;
				else right = dptable[i][j+1];

				if (j == m-1 || i == 0) diag_up = 0;
				else diag_up = dptable[i-1][j+1];

				if (j == m-1 || i == n-1) diag_down = 0;
				else diag_down = dptable[i+1][j+1];

				dptable[i][j] = mine[i][j] 
						+ max(right, max(diag_down, diag_up));

			}
		}

		int maxgold = dptable[0][0];
		for (int i = 0; i < n; i++) {
			if (dptable[i][0] > maxgold)
				maxgold = dptable[i][0];
		}
		cout << maxgold << '\n';
	}
	return 0;
}
