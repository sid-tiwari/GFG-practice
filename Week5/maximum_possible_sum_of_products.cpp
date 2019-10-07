//-------------------------------------------------
/*
Problem - Maximum possible sum of products

TC - O(nlogn)
SC - O(1)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, e;
	
	vector <int> v1, v2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> e;
			v1.push_back(e);
		}
		for (int j = 0; j < n; j++) {
			cin >> e;
			v2.push_back(e);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		unsigned long long sum = 0;
		for (int j = 0; j < n; j++) {
			sum += v1[j] * v2[j];
		}
		cout << sum << '\n';
		v1.clear();
		v2.clear();
	}
	return 0;
}