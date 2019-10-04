//-------------------------------------------------
/*
Problem - Check if given four points form a square 

TC - O(1)
SC - O(1)

EBTC - O(1)
EBSC - O(1)
*/
//-------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int distance(pair<int, int> x, pair<int, int> y) {
	return pow(y.first - x.first, 2) + pow(y.second - x.second, 2);
}

int main()
{
    int t;
	pair <int, int> a;
	pair <int, int> b;
	pair <int, int> c;
	pair <int, int> d;
	vector <int> dist;

	cin >> t;
	while (t--) {
		cin >> a.first >> a.second;
		cin >> b.first >> b.second;
		cin >> c.first >> c.second;
		cin >> d.first >> d.second;
		dist.push_back(distance(a, b));
		dist.push_back(distance(a, c));
		dist.push_back(distance(a, d));
		dist.push_back(distance(c, b));
		dist.push_back(distance(d, b));
		dist.push_back(distance(c, d));

		sort(dist.begin(), dist.end());

		//4 sides equal and 2 diagonals equal and all greater than 0
		if (dist[0] > 0 && dist[0] == dist[1] && 
			dist[1] == dist[2] && dist[2] == dist[3] && 
			dist[4] == dist[5])
			
			cout << "1\n";
		else
			cout << "0\n";

		dist.clear();

	}
    return 0;
}