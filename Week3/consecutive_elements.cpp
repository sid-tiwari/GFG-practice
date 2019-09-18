//-------------------------------------------------
/*
Problem - Consecutive elements

TC - O(|str|)
SC - O(1)

EBTC - O(|str|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		int len = str.size();
		int count = 0;
		for (int j = 0; j < len - 1; j++) {
			if (str[j] == str[j+1]) {
				count++;
				continue;
			}
			else {
				str.erase(j - count, count);
				j -= count;
				len -= count;
				count = 0;
			}
		}
		str.erase(len - 1 - count, count);
		cout << str << '\n';
	}
	return 0;
}