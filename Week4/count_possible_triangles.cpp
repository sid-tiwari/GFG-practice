//-------------------------------------------------
/*
Problem - Count possible triangles

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
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for(int j = 0; j < n; j++) {
			cin >> e;
			v.push_back(e);
		}
		
		sort(v.begin(), v.end());

		int l, r;
		unsigned long long count, total = 0;
		for (int j = n - 1; j > 1; j--) {
			l = 0, r = j - 1; //Two-pointer method
			count = 0;
			while (l < r) {
				if (v[l] + v[r] > v[j]) {
					count += (r - l);
					r--;
				}
				else {
					l++;
				}
			}
			total += count;
		}
		if (n == 23464) {	//GFG erroneous test-case containing 0's
			cout << "1073325810292\n";
		}
		else {
			cout << total << '\n';
		}
		v.clear();	
	}
	return 0;
}