//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Element that appears once where every element occurs twice

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, e;
	vector <int> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		int res = 0;
		for (int i = 0; i < n; i++) {
			res ^= v[i];
		}
		cout << res << '\n';

		v.clear();
	}

	return 0;
}