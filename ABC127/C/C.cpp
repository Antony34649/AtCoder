#include <iostream>
#include <vector>
#include <istream>
#include <algorithm>
using namespace std;

int main() {
	vector<int> l, r;
	int n, m, i, upper, lower;

	cin >> n >> m;
	l.assign(m, 0);
	r.assign(m, 0);
	for (i = 0; i < m; i++) {
		cin >> l[i] >> r[i];
	}
	upper = *min_element(r.begin(), r.end());
	lower = *max_element(l.begin(), l.end());

	cout << max((min(upper, n) - lower)+1,0) << endl;
}