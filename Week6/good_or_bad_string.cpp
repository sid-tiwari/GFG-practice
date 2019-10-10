//-------------------------------------------------
/*
Problem - Good or bad string

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unordered_set <char> vowels({'a', 'e', 'i', 'o', 'u'});

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int vcount = 0, ccount = 0;
		int flag = 1;	//1->good, 0->bad
		for (char ch : str) {
			if (ch == '?') {
				vcount++;
				ccount++;
			}
			else {
				if (vowels.find(ch) != vowels.end()) {
					vcount++;
					ccount = 0;
				}
				else {
					ccount++;
					vcount = 0;
				}
			}
			if (vcount == 6 || ccount == 4) {
				flag = 0;
				break;
			}
		}
		cout << flag << '\n';
	}
    return 0;
}