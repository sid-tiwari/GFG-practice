//-------------------------------------------------
/*
Problem - Make a distinct digit array

TC - O(nloga)
SC - O(1)  -> set has constant upper bound = 10

EBTC - O()	N/A (different problem)
EBSC - O()
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string str;
	set <char> s;

	cin >> t;
	while (t--) {
		cin >> n;
		cin.ignore();
		getline(cin, str, '\n');

		for (int i = 0; i < str.length(); i++) {
			if (str[i] != ' ')
				s.insert(str[i]);
			if (s.size() == 10)
				break;
		}

		for (auto c : s) {
			cout << c << ' ';
		}
		cout << '\n';

		s.clear();
	}
    return 0;
}