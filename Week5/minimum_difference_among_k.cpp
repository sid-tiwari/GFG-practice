//-------------------------------------------------
/*
Problem - Minimum difference among K

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		int mindiff = v[n-1];
		int diff = 0;
		for (int i = 0; i <= n-k; i++) {
			diff = v[i+k-1] - v[i];
			if (mindiff > diff)
				mindiff = diff;
		}
		cout << mindiff << '\n';
		v.clear();
	}
    return 0;
}