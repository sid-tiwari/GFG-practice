//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Count of strings that can be formed using a, b and c
		  under given constraints

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

	cin >> t;
	while (t--) {
		cin >> n;
		
		int result = 1						//0 b, 0 c 
				   + n 						//0 b, 1 c	
				   + n * (n-1) / 2			//0 b, 2 c
				   + n * (n-1)				//1 b, 1 c
				   + n 						//1 b, 0 c
				   + n * (n-1) * (n-2) / 2;	//1 b, 2 c

		cout << result << '\n';
	}

	return 0;
}