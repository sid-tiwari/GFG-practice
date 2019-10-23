//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Roman number to integer

TC - O(len)
SC - O(1)

EBTC - O(len)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	map <char, int> mp;
	mp.insert(make_pair('I', 1));
	mp.insert(make_pair('V', 5));
	mp.insert(make_pair('X', 10));
	mp.insert(make_pair('L', 50));
	mp.insert(make_pair('C', 100));
	mp.insert(make_pair('D', 500));
	mp.insert(make_pair('M', 1000));

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int len = str.length();

		int num = 0;
		for (int i = 0; i < len-1; i++) {
			if (mp[str[i]] >= mp[str[i+1]]) {
				num += mp[str[i]];
			}
			else {
				num -= mp[str[i]];
			}
		}
		num += mp[str[len-1]];
		cout << num << '\n';
	}

	return 0;
}