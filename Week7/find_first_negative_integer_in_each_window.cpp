//-------------------------------------------------
//-------------------------------------------------
/*
Problem - First negative integer in every window of size k

TC - O(n)
SC - O(n)

EBTC - O(n)
EBSC - O(n)
*/
//-------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

/*
void showWindow(vector <int> &v, int i, int k) {
	cout << "Window: ";
	for (int j = i; j < i+k; j++) {
		cout << v[j] << " ";
	}
	cout << '\n';
}

void showNeg(vector <int> &neg) {
	cout << "Neg: ";
	for (int i = 0; i < neg.size(); i++) {
		cout << neg[i] << ' ';
	}
	cout << '\n';
}
*/
int main() {
	int t, n, e, k;
	vector <int> v;
	vector <int> neg; //used as a queue

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> e;
			v.push_back(e);
			if (e < 0) {
				neg.push_back(i);
			}
		}
		cin >> k;

		for (int i = 0; i <= n-k; i++) {
			if (!neg.empty() && neg.front() < i)
				neg.erase(neg.begin());

			//showWindow(v, i, k);
			//showNeg(neg);

			if (!neg.empty() && neg.front() < i+k) {
				cout << v[neg.front()] << ' ';
			}
			else {
				cout << "0 ";
			}
			
		}
		cout << '\n';

		v.clear();
		neg.clear();
	}

	return 0;
}