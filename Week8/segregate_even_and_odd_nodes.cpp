//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Segregate even and odd nodes

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
		
		for (int i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				cout << v[i] << ' ';
				v.erase(v.begin() + i);
				i -= 1;
				n -= 1;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';

		v.clear();
	}

	return 0;
}