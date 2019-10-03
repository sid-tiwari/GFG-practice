//-------------------------------------------------
/*
Problem - 

TC - O(mnx)
SC - O(nx)

EBTC - O(nx)	-> TODO
EBSC - O(nx)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, n, x;

	cin >> t;
	while (t--) {
		cin >> m >> n >> x;

		//no. of throws x possible sums.
		//Bottom right element will give ways to get sum x in n throws
		unsigned long long int ways[n+1][x+1];	//0th col and 0th row empty
		memset(ways, 0, sizeof(ways));	//initially all 0

		//For 1 dice
		for (int i = 1; i <= m && i <= x; i++)
			ways[1][i] = 1;

		for (int i = 2; i <= n; i++) {
			for (int j = 1; j <= x; j++) {
				for (int k = 1; k < j && k <= m; k++) {
					ways[i][j] += ways[i-1][j-k];
					//ways[3,8] = ways[2,7]+ways[2,6]+...ways[2,2]
					//assuming 6 sided dice
				}
			}
		}

		cout << ways[n][x] << '\n';
	}
    return 0;
}