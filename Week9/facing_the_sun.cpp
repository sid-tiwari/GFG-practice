//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Facing the sun

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
		
		int max = v[0];
		int count = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] > max) {
				count += 1;
				max = v[i];
			}
		}
		cout << count << '\n';

		v.clear();
	}

	return 0;
}