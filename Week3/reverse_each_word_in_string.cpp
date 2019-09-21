//-------------------------------------------------
/*
Problem - Reverse each word in a given string

TC - O(n^2)
SC - O(1)

EBTC - O()	N/A
EBSC - O()
*/
//-------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;

		int b = 0;
		int e = str.find('.', 0);
		while (e != -1) {
			reverse(str.begin() + b, str.begin() + e);
			b = e + 1;
			e = str.find('.', e + 1);
		}

		reverse(str.begin() + b, str.end()); //last word

		cout << str << '\n';

	}

	return 0;
}