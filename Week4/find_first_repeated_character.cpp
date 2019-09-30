//-------------------------------------------------
/*
Problem - Find first repeated character

TC - O(n)
SC - O(1) 	-> constant upper bound on characters

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	map <char, int> m;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		int len = str.length();
		int flag = 0;	//no repetition
		for (int j = 0; j < len; j++) {
			if (m.count(str[j]) > 0) {
				flag = 1;	//repetition found
				cout << str[j] << '\n';
				break;
			}
			else {
				m[str[j]] = 1;
			}
		}
		if (!flag) cout << "-1\n";
		m.clear();
	}
	return 0;
}