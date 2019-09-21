//-------------------------------------------------
/*
Problem - Uncommon Characters

TC - O(|s1|+|s2|)	-> using find() for 'a' to 'z'
SC - O(1)

EBTC - O(|s1|+|s2|) -> using hash table 
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string s1, s2;
		cin >> s1;
		cin >> s2;
		int flag1 = 0, flag2 = 0;

		for (char j = 'a'; j <= 'z'; j++) {
			if (s1.find(j) == -1) flag1 = 0;
			else flag1 = 1;

			if (s2.find(j) == -1) flag2 = 0;
			else flag2 = 1;

			if (flag1 != flag2) cout << j;
		}
		cout << '\n';
	}
	return 0;
}