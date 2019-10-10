//-------------------------------------------------
/*
Problem - Find second largest element

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
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}

		if (n == 1) {
			cout << "-1\n";
			v.clear();
			continue;
		}
		
		int max = v[0];
		int smax = v[1];
		if (max == smax) {
			for (int j = 2; j < n; j++) {
				if (v[j] != max)
					smax = v[j];
			}
		}
		if (max == smax) {
			cout << "-1\n";
			v.clear();
			continue;
		}

		if (max < smax)
			swap(max, smax);	

		for (int j = 1; j < n; j++) {
			if (v[j] > max) {
				smax = max;
				max = v[j];
			}
			else 
				if (v[j] > smax && v[j] != max)
					smax = v[j];
		}
		cout << smax << '\n';
		v.clear();
	}

	return 0;
}