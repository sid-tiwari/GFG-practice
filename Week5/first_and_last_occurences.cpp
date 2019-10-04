//-------------------------------------------------
/*
Problem - First and last occurences of x

TC - O(n)
SC - O(1)

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e, x;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		int l = 0, r = n - 1;
		int lflag = 0, rflag = 0;
		while (l <= r) {
			if (v[l] == x) {
				if (!lflag)
					lflag = 1;
			}
			else {
				l++;
			}

			if (v[r] == x) {
				if (!rflag)
					rflag = 1;
			}
			else {
				r--;
			}

			if (lflag && rflag)
				break;
		}

		if (lflag && rflag)
			cout << l << ' ' << r << '\n';
		else
			cout << "-1\n";
		
		v.clear();
	}
    return 0;
}