//-------------------------------------------------
/*
Problem - Find first and last occurence of x

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
    int t, n;
    unsigned long long int e, x;
	vector <unsigned long long int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		cin >> x;
		
		int l = 0, r = n - 1;
		bool lflag = false, rflag = false;
		while (l <= r) {
			//cout << l << ' ' << r << '\n';
			if (v[l] == x) {
				if (!lflag)
					lflag = !lflag;
			}
			else {
				if (!lflag)
					l++;
			}

			if (v[r] == x) {
				if (!rflag)
					rflag = !rflag;
			}
			else {
				if (!rflag)
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