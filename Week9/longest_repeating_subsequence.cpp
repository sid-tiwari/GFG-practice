//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Longest repeating subsequence

TC - O(n^2)
SC - O(n^2)

EBTC - O(n^2)
EBSC - O(n^2)
*/
//-------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;
		string str;
		cin >> str;

		int table[n+1][n+1];
		memset(table, 0, sizeof(table));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (str[i-1] == str[j-1] && i != j) {
					table[i][j] = table[i-1][j-1] + 1;
				}
				else {
					table[i][j] = max(table[i-1][j], table[i][j-1]);
				}
			}
		}

		cout << table[n][n] << '\n';
	}
	return 0;
}
