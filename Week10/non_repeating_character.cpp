//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Non Repeating Character

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int t, n;
	unordered_map <char, pair <int, int> > mp;

	cin >> t;
	while (t--) {
		cin >> n;
		string str;
		cin >> str;

		int pos = 1;
		for (char c : str) {
			if (mp.count(c) > 0)
				mp[c].second += 1;
			else {
				mp.insert({c, make_pair(pos, 1)});
				pos += 1;
			}
		}

		int flag = -1, min = n;
		char c;
		for (auto itr = mp.begin(); itr != mp.end(); itr++) {
			if (itr->second.second == 1) {
				if (itr->second.first < min) {
					min = itr->second.first;
					c = itr->first;
					flag = 0;
				}
			}
		}
		if (flag == -1) {
			cout << "-1\n";
		}
		else {
			cout << c << '\n';
		}

		mp.clear();
	}
	return 0;
}
