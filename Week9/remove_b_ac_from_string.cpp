//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Remove "b" and "ac" from a given string
 
TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int n = str.length();
		for (int i = 0; i < n; i++) {
			if (str[i] == 'b') {
				str.erase(i,1);
				i -= 1;
				n -= 1;
			}
			else if (str[i] == 'a') {
				if (i < n - 1 && str[i+1] == 'c') {
					str.erase(i,2);
					i -= 1;
					n -= 2;
				}
			}
		}
		cout << str << '\n';
	}

	return 0;
}