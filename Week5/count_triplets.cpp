//-------------------------------------------------
/*
Problem - Count triplets with sum smaller than X

TC - O(n^2)
SC - O(1)

EBTC - O(n^2)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, e;
	long x;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> x;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		int l, r;
		unsigned long long count = 0;
		for (int j = n - 1; j > 1; j--) {
			l = 0, r = j - 1;
			while (l < r) {
				if (v[l] + v[r] + v[j] < x) {
					count += r - l;
					l++;
				}
				else
					r--;
			}
		}		
		cout << count << '\n';
		v.clear();
	}

	return 0;
}