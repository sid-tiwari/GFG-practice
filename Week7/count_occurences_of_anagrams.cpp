//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Count occurences of Anagrams

TC - O(c)	-> c = length of text  //sliding window
SC - O(1)

EBTC - O(c)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

int checkAnagram(int wordchars[], int textchars[]) {
	bool flag = true;
	for (int i = 0; i < 26; i++) {
		if (wordchars[i] != textchars[i]) {
			flag = false;
			break;
		}
	}

	return (flag ? 1 : 0);
}

int main() {
	int t;
	int wordchars[26], textchars[26]; // char count arrays

	cin >> t;
	while (t--) {
		memset(wordchars, 0, sizeof(wordchars));
		memset(textchars, 0, sizeof(textchars));

		string text, word;
		cin >> text;
		cin >> word;
			
		int tsize = text.size();
		int wsize = word.size();

		for (int i = 0; i < wsize; i++) {
			wordchars[word[i] - 'a'] += 1;
		}

		int anagramCount = 0;
		for (int i = 0; i < wsize; i++) {
			textchars[text[i] - 'a'] += 1;
		}
		anagramCount += checkAnagram(wordchars, textchars);

		for (int i = 1, j = wsize; j < tsize; i++, j++) {
			textchars[text[i-1] - 'a'] -= 1;
			textchars[text[j] - 'a'] += 1;
			anagramCount += checkAnagram(wordchars, textchars);			
		}

		cout << anagramCount << '\n';

	}

	return 0;
}