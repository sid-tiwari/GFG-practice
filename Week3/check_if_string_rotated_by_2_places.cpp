//-------------------------------------------------
/*
Problem - 

TC - O(|a|)	a -> string
SC - O(1)

EBTC - O(|a|)
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
		string str1, str2;
		cin >> str1;
		cin >> str2;

		int len1 = str1.length();
		int len2 = str2.length();

		if (len1 != len2) {
			cout << "0\n";
			continue;
		}

		if (len1 == 1) {
			if (str1[0] == str2[0]) cout << "1\n";
			else cout << "0\n";

			continue;
		}

		int flag = 1; //1 : matching, 0 : not matching

		//clockwise
		if (str1[0] == str2[len1-2] && str1[1] == str2[len1-1]) {
			for (int j = 2; j < len1; j++) {
				if (str1[j] != str2[j-2]) {
					flag = 0;
					break;
				}
			}
		}
		//anti-clockwise
		else {
			if(str1[len1-1] == str2[1] && str1[len1-2] == str2[0]) {
				for (int j = 2; j < len2; j++) {
					if(str1[j-2] != str2[j]) {
						flag = 0;
						break;
					}
				}
			}
			else
				flag = 0;
		}

		cout << flag << '\n';
	}

	return 0;
}