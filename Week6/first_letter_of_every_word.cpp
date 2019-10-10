//-------------------------------------------------
/*
Problem - Print first letter of every word in the string

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

	cin >> t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str, '\n');
		int flag = 0;
		for (char c : str) {
			if (c >= 'a' && c <= 'z' && flag == 0) {
				cout << c;
				flag = 1;
			}
			else {
				if (c == ' ')
					flag = 0;
				continue;
			}
		}
		cout << '\n';
	}
    return 0;
}