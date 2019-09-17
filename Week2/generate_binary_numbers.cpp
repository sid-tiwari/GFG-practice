//-------------------------------------------------
/*
Problem - Generate binary numbers

TC - O(nlogn)
SC - O(logn)

EBTC - O(nlogn)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

string dec_to_binary(int n) {
	string str;
	while(n > 0) {
		str.insert(0, to_string(n % 2));
		n /= 2;
	}
	return str;
}

int main() {
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 1; j < n; j++) {
			string str = dec_to_binary(j);
			cout << str << ' ';
		}
		string str = dec_to_binary(n);
		cout << str << '\n';
	}

	return 0;
}