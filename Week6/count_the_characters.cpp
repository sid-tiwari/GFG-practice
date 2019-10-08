//-------------------------------------------------
/*
Problem - Count the characters

TC - O(n)				
SC - O(1)

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    int count[26];

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		cin >> n;

		memset(count, 0, sizeof(count));
		char current = str[0];
		count[current - 'a'] += 1;

		for (int i = 1; i < str.length(); i++) {
			if (str[i] == current) {
				continue;
			}
			else {
				current = str[i];
				count[current - 'a'] += 1;
			}
		}

		int res = 0;
		for (int i = 0; i < 26; i++) {
			if (count[i] == n) {
				res++;
			}
		}

		cout << res << '\n';

	}
    return 0;
}