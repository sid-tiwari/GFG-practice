//-------------------------------------------------
/*
Problem - Find smallest and second smallest

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
		
		int min = v[0];
		int smin = v[1];
		if (min == smin) {
			for (int j = 2; j < n; j++) {
				if (v[j] != smin)
					smin = v[j];
			}
		}
		if (min == smin) {
			cout << "-1\n";
			v.clear();
			continue;
		}

		if (min > smin)
			swap(min, smin);	

		for (int j = 1; j < n; j++) {
			if (v[j] < min) {
				smin = min;
				min = v[j];
			}
			else 
				if (v[j] < smin && v[j] != min)
					smin = v[j];
		}
		cout << min << ' ' << smin << '\n';
		v.clear();
	}

	return 0;
}