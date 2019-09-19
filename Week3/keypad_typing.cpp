//-------------------------------------------------
/*
Problem - Keypad typing

TC - O(n)
SC - O(1)

EBTC - O()
EBSC - O()
*/
//-------------------------------------------------

#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	map <char, int> m;

	//mapping keypad
	for (char x = 'a'; x <= 'z'; x++) {
		switch(x) {
			case 'a':
			case 'b':
			case 'c': {
				m.insert(pair<char, int>(x, 2));
				break;
			}
			case 'd':
			case 'e':
			case 'f': {
				m.insert(pair<char, int>(x, 3));
				break;
			}
			case 'g':
			case 'h':
			case 'i': {
				m.insert(pair<char, int>(x, 4));
				break;
			}
			case 'j':
			case 'k':
			case 'l': {
				m.insert(pair<char, int>(x, 5));
				break;
			}
			case 'm':
			case 'n':
			case 'o': {
				m.insert(pair<char, int>(x, 6));
				break;
			}
			case 'p':
			case 'q':
			case 'r':
			case 's': {
				m.insert(pair<char, int>(x, 7));
				break;
			}
			case 't':
			case 'u':
			case 'v': {
				m.insert(pair<char, int>(x, 8));
				break;
			}
			case 'w':
			case 'x':
			case 'y':
			case 'z': {
				m.insert(pair<char, int>(x, 9));
				break;
			}
		}
	}

	cin >> t;
	for (int i = 0; i < t; i++) {
		string str;
		cin >> str;
		
		for (char x : str) {
			cout << m[x];
		}
		cout << '\n';
	}

	return 0;
}