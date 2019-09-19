//-------------------------------------------------
/*
Problem - k largest elements

TC - O(n + klogn)
SC - O(n)

EBTC - O(n + klogk)
EBSC - O(1) ?
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	int n, k, e;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		make_heap(v.begin(), v.end());
		for (int j = 0; j < k; j++) {
			pop_heap(v.begin(), v.end());
			e = v.back();
			v.pop_back();
			cout << e << ' ';
		}
		cout << '\n';
		v.clear();
	}
	return 0;
}