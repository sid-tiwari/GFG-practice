//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Count pairs with given sum

TC - O(nlogn)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
	int t, n, k, e;
	vector <int> v;
	unordered_map <int, int> m;

	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		for (int i = 0; i < n; i++) {
			if (m.count(v[i]) > 0) {
				m[v[i]] += 1;
				v.erase(v.begin() + i);
				i -= 1;
				n -= 1;
			}
			else {
				m[v[i]] = 1;
			}
		}

		int low = 0, high = n - 1;
		int count = 0;

		while (low <= high) {
			if (v[low] + v[high] > k) {
				high -= 1;
			}
			else if (v[low] + v[high] < k){
				low += 1;
			}
			else {
				if (v[low] == v[high]) {
					count += m[v[low]] * (m[v[low]] - 1) / 2; //mC2
					low += 1;
				}
				else {
					count += m[v[low]] * m[v[high]];
					low += 1;
					high -= 1;
				}
				
			}
		}
		cout << count << '\n';
		v.clear();
		m.clear();
	}

	return 0;
}