//-------------------------------------------------
/*
Problem - Shuffle integers

TC - O(n)	//printing instead of shuffling. INCOMPLETE QUESTION
SC - O(1)

EBTC - O()	N/A
EBSC - O()
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

		for (int i = 0, j = n/2; i < n/2 && j < n; i++, j++) {
			cout << v[i] << ' ' << v[j] << ' ';
		}
		if (n % 2 == 1) {
			cout << v[n-1];
		}
		cout << '\n';

		v.clear();
	}

	return 0;
}