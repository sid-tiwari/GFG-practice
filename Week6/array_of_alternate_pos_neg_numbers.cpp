//-------------------------------------------------
/*
Problem - Array of alternate +ve and -ve numbers

TC - O(n)
SC - O(n)

EBTC - O() -> N/A (order not maintained)
EBSC - O()
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e;
    vector <int> vp, vn;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			if (e >= 0) {
				vp.push_back(e);
			}
			else {
				vn.push_back(e);
			}
		}
		int len = vp.size() < vn.size() ? vp.size() : vn.size();
		for (int i = 0; i < len; i++) {
			cout << vp[i] << ' ' << vn[i] << ' ';
		}
		if (vp.size() > len) {
			for (int i = len; i < vp.size(); i++) {
				cout << vp[i] << ' ';
			}
		}
		else {
			for (int i = len; i < vn.size(); i++) {
				cout << vn[i] << ' ';
			}
		}
		cout << '\n';
		vp.clear();
		vn.clear();
	}
    return 0;
}