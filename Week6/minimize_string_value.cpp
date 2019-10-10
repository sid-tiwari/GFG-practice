//-------------------------------------------------
/*
Problem - 

TC - O(|str|)				
SC - O(1)

EBTC - O(|str|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int max(int count[]) {
	int index = 0;
	int maxcount = count[0];
	for (int i = 1; i < 26; i++) {
		if (count[i] > maxcount) {
			index = i;
			maxcount = count[i];
		}
	}
	return index;
}

int main()
{
    int t, k;
    int count[26]; //for each lowercase alphabet

	cin >> t;
	while (t--) {
		memset(count, 0, sizeof(count));
		string str;
		cin >> str;
		cin >> k;

		if (k > str.length()) {
			cout << "0\n";
			continue;
		}

		for (int i = 0; i < str.length(); i++) {
			count[str[i] - 'a']++;
		}

		for (int i = 0; i < k; i++) {
			count[max(count)]--;
		}

		int value = 0;
		for (int i = 0; i < 26; i++) {
			value += count[i] * count[i];
		}

		cout << value << '\n';
	}
    return 0;
}