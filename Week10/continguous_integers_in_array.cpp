//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Check if array contains contiguous integers
		  with duplicates allowed

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	int t, n, e;
	vector <int> v;
	unordered_map <int, int> mp; 

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
			if (mp.count(e) > 0)
				mp[e] += 1;
			else
				mp[e] = 1;
		}

		int min = v[0],max = v[0];
		for (int i = 0; i < n; i++) {
			if (v[i] < min)
				min = v[i];
			if (v[i] > max)
				max = v[i];
		}

		bool flag = true;
		for (int i = min; i <= max; i++) {
			if (mp.count(i) == 0) {
				flag = false;
				break;
			}
		}

		if (flag)
			cout << "Yes\n";
		else
			cout << "No\n";

		mp.clear();
		v.clear();
	}
	return 0;
}
