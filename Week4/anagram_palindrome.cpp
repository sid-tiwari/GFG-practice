//-------------------------------------------------
/*
Problem - Anagram Palindrome

TC - O(|s|)
SC - O(1) -> using map but has constant upper bound

EBTC - O(|s|)
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
		for (int j = 0; j < len; j++) {
			if (m.count(str[j]) > 0) m[str[j]] += 1;
			else m[str[j]] = 1;
		}
		int count = 0;
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second % 2 == 1) count++;	//odd occurence char
			if (count > 1) break; //cannot have more than 1 odd occurence char
		}

		if (count < 2) cout << "Yes\n";
		else cout << "No\n";
		m.clear();
	}
	return 0;
}