//-------------------------------------------------
//-------------------------------------------------
/*
Problem - Does robot move circular

TC - O(|s|)
SC - O(1)

EBTC - O(|s|)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;
	while (t--) {
		string seq;
		cin >> seq;

		//0->N, 1->E, 2->S, 3->W
		int direction = 0; //assuming initially facing north
		int x = 0, y = 0;	//initial position as origin
		for (char c : seq) {
			if (c == 'G') {
				switch (direction) {
					case 0: {
						y += 1;
						break;
					}
					case 1: {
						x += 1;
						break;
					}
					case 2: {
						y -= 1;
						break;
					}
					case 3: {
						x -= 1;
						break;
					}
				}
			}
			else {
				if (c == 'R') {
					direction += 1;
				}
				else if (c == 'L') {
					direction -= 1;
				}
				
				if (direction < 0)
					direction += 4;
				if (direction > 3)
					direction -= 4;
			}
		}
		if (x == 0 && y == 0)
			cout << "Circular\n";
		else
			cout << "Not Circular\n";
	}
	return 0;
}
