//-------------------------------------------------
/*
Problem - Rotate Array

TC - O(n)
SC - O(1)

EBTC - O(n)
EBSC - O(1)
*/
//-------------------------------------------------

#include <iostream>
#include <queue>

using namespace std;

int main() {
	int t;
	int n, d, e;
	queue <int> q;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> d;
		for (int j = 0; j < n; j++) {
			cin >> e;
			q.push(e);
		}

		for (int j = 0; j < d; j++) {
			e = q.front();
			q.pop();
			q.push(e);
		}

		for (int j = 0; j < n - 1; j++) {
			cout << q.front() << ' ';
			q.pop();
		}
		cout << q.front() << '\n';
		q.pop();
	}

	return 0;
}