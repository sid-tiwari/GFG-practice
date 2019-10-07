//-------------------------------------------------
/*
Problem - Maximum repeating number

TC - O(n)
SC - O(k)

EBTC - O(n)
EBSC - O(1)	-> TODO
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, e;

	cin >> t;
	while (t--) {
		cin >> n >> k;
		int count[k];
		memset(count, 0, sizeof(count));
		for (int i = 0; i < n; i++) {
			cin >> e;
			count[e]++;
		}

		int max = 0;
		int maxcount = count[0];
		for (int i = 1; i < k; i++) {
			if (count[i] > maxcount) {
				maxcount = count[i];
				max = i;
			}
		}
		cout << max << '\n';
	}
    return 0;
}