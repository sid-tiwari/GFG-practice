//-------------------------------------------------
/*
Problem - Total number of strings

TC - O(1)
SC - O(1)

EBTC - O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t, n;
	int result;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		/*case 1: 0 b and 0 c -> n!/n!
		  case 2: 0 b and 1 c -> n!/n-1!
		  case 3: 0 b and 2 c -> n!/n-2!.2!
		  case 4: 1 b and 0 c -> n!/n-1!
		  case 5: 1 b and 1 c -> n!/n-2!
		  case 6: 1 b and 2 c -> n!/n-3!.2!
		*/
		if (n == 1) 
			result = 3;
		else
			result = 1 + n + n * (n - 1) / 2 + n + n * (n - 1) + n * (n - 1) * (n - 2) / 2;
		cout << result << '\n';
	}

	return 0;
}