//-------------------------------------------------
/*
Problem - Permutations of a given string

TC - O(|s|*|s|!)	-> referred editorial
SC - O(1)

EBTC - O(|s|*|s|!)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

void permutation(string x, int low, int high, set <string> &perms) {
	if (low == high) {
		perms.insert(x);
	}
	else {
		for (int i = low; i <= high; i++) {
			swap(x[low], x[i]); //swap A with A, then A with B...
			permutation(x, low+1, high, perms); //fixed character at low
			swap(x[low], x[i]); //swap back to swap A with further chars
		}
	}
}

int main()
{
    int t;
    set <string> perms;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		permutation(s, 0, s.length()-1, perms);
		for (auto str: perms) {
			cout << str << ' ';
		}
		cout << '\n';
		perms.clear();
	}
    return 0;
}