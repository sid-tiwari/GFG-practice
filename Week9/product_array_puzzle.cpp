//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Product array puzzle

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
		
		unsigned long long int product = 1;
		for (int i = 0; i < n; i++) {
			product *= v[i];
		}

		for (int i = 0; i < n; i++) {
			cout << (product / v[i]) << ' ';
		}
		cout << '\n';
		v.clear();
	}

	return 0;
}