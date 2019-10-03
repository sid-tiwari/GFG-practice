//-------------------------------------------------
/*
Problem - Check for subsequence

TC - O(|b|)
SC - O(1)

EBTC - O(|b|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string a, b;
		cin >> a;
		cin >> b;

		int alen = a.length();
		int blen = b.length();
		int index = 0;
		for (int j = 0; j < blen; j++) {
			if (a[index] == b[j])
				index++;
			if (index == alen)
				break;
		}
		if (index == alen)
			cout << "1\n";
		else
			cout << "0\n";
		
	}

	return 0;
}