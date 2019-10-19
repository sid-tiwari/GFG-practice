//-------------------------------------------------
//-------------------------------------------------
/*
Problem - N meeting in one room

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, e;
	vector <int> s;
	vector < pair <int,int> > f;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			s.push_back(e);
		}
		for (int i = 0; i < n; i++) {
			cin >> e;
			f.push_back(make_pair(e, i));
		}

		sort(f.begin(), f.end());

		int start_time = -1;
		for (int i = 0; i < n; i++) {
			if (s[f[i].second] >= start_time) {
				cout << f[i].second + 1 << ' ';
				start_time = f[i].first;
			}
		}
		cout << '\n';

		s.clear();
		f.clear();
	}

	return 0;
}