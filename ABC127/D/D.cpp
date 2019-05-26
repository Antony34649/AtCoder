#include <bits/stdc++.h>

using namespace std;

bool Compare(pair<int, int> fArgu, pair<int, int> sArgu) {
	return fArgu.second > sArgu.second;
}

int main() {
	int n, m, i, j, x = 0;
	cin >> n >> m;
	vector<int> a(n), d;
	vector<long long> ans(n);
	vector<pair<int, int>> p(m);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < m; i++) {
		cin >> p[i].first >> p[i].second;
	}

	sort(a.begin(), a.end());
	sort(p.begin(), p.end(), Compare);

	for (i = 0; i < m; i++) {
		for (j = 0; j < p[i].first; j++) {
			d.push_back(p[i].second);
		}
	}

	ans[0] = accumulate(a.begin(), a.end(), 0LL);
	if (d.size() < n) {
		for (i = 0; i < d.size(); i++) {
			ans[i + 1] = ans[i] + (d[i] - a[i]);
		}
	}
	else {
		for (i = 0; i < n-1; i++) {
			ans[i + 1] = ans[i] + (d[i] - a[i]);
		}
		ans.push_back(accumulate(d.begin(), d.begin() + (n - 1), 0LL));
	}
	cout << *max_element(ans.begin(), ans.end()) << endl;
}