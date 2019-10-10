//-------------------------------------------------
/*
Problem - 

TC - O(|s|)				
SC - O(|s|)

EBTC - O(|s|) -> using sprintf to reduce time
EBSC - O(|s|)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		
		int count = 1;
		char current = str[0];
		string result = "";
		for (int i = 1; i < str.length(); i++) {
			if (str[i] == current) {
				count++;
			}
			else {
				result.push_back(current);
				result.append(to_string(count));
				count = 1;
				current = str[i];
			}
		}
		result.push_back(current);
		result.append(to_string(count));

		reverse(result.begin(), result.end());

		cout << result << '\n';

	}
    return 0;
}