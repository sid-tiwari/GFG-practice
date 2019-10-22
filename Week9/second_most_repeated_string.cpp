//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Second most repeated string in a sequence

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
	int t, n;
	string e;
	vector <string> v;
	unordered_map <string, int> m;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
		}

		for (int i = 0; i < n; i++) {
			if (m.count(v[i]) > 0) {
				m[v[i]] += 1;
			}
			else {
				m[v[i]] = 1;
			}
		}

		string strmax, strmax2;
		int max = -1, max2 = -1;

		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second > max) {
				max2 = max;
				strmax2 = strmax;
				max = itr->second;
				strmax = itr->first;
			}
			else if (itr->second > max2) {
				max2 = itr->second;
				strmax2 = itr->first;
			}
		}
		cout << strmax2 << '\n';
		
		m.clear();
		v.clear();
	}

	return 0;
}