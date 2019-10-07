//-------------------------------------------------
/*
Problem - Longest increasing subarray

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
		
		int max = 0, current = 1;
		for (int j = 0; j < n - 1; j++) {
			if (v[j] < v[j+1]) {
				current++;
			}
			else {
				if (max < current)
					max = current;
				current = 1;
			}
		}
		if (max < current) max = current;
		cout << max << '\n';

		v.clear();
	}

	return 0;
}