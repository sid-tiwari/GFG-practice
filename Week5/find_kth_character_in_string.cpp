//-------------------------------------------------
/*
Problem - Find k-th character in string

TC - O(n)	referred editorial
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int m) {
	string bin;
	while (m > 0) {
		bin.insert(0, to_string(m % 2));
		m /= 2;
	}
	return bin;
}

int main()
{
    int t, m, k, n;
    unsigned long gap, block, pos;

	cin >> t;
	while (t--) {
		cin >> m >> k >> n;	
		//after n iterations, original bits will be apart in 'blocks'	
		gap = pow(2, n);
		block = k / gap; //if 2 iterations -> gap = 4, 3rd bit will lie in block 0
						 //11th bit in block 2, etc
		pos = k % gap; //position in particular block
		
		string bin = decimalToBinary(m);
		char root = bin[block];

		if (pos == 0) {	//original bit from number before expansion
			cout << root << '\n';
			continue;
		}

		bool flip = true;
		while (pos > 1) {
			if (pos % 2 == 1)
				flip = !flip;
			pos /= 2;
		}

		if (flip) {
			if (root == '1') cout << "0\n";
			else cout << "1\n";
		}
		else {
			cout << root << '\n';
		}

	}	
    return 0;
}