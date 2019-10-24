//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Group anagrams together

TC - O()
SC - O(n)

EBTC - O()
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	vector <string> v;
	unordered_map <string, int> mp;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			string e;
			cin >> e;
			v.push_back(e);
		}
		
		for (int i = 0; i < n; i++) {
			sort(v[i].begin(), v[i].end()); //O(logs)  s->length of string
			if (mp.count(v[i]) > 0) {
				mp[v[i]] += 1;
			}
			else {
				mp[v[i]] = 1;
			}
		}

		vector <int> values;
		for (auto itr = mp.begin(); itr != mp.end(); itr++) {
			values.push_back(itr->second);
		}

		sort(values.begin(), values.end());

		for (int i = 0; i < values.size(); i++) {
			cout << values[i] << ' ';
		}
		cout << '\n';

		values.clear();
		mp.clear();
		v.clear();
	}

	return 0;
}