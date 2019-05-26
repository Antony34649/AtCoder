#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, i, j,on, ans=0, count;
	string a;

	cin >> n >> m;
	vector<int> k(m);
	vector<vector<int>> s(m);
	vector<int> p(m);
	stringstream ss;
	for (i = 0; i < m; i++) {
		cin >> k[i];
		for (j = 0; j < k[i]; j++) {
			int x;
			cin >> x;
			s[i].push_back(x);
		}
	}
	for (i = 0; i < m; i++) {
		cin >> p[i];
	}
	for (i = 0; i < pow(2,n); i++) {
		on = 0;
		count = 0;
		string b = bitset<10>(i).to_string();
		for (j = 0; j < m; j++) {
			for (int k = 0; k < s[j].size(); k++) {
				if (b[s[j][k]] == '1') {
					on++;
				}
			}
			if ((on % 2) == p[j]) {
				count++;
			}
		}
		if (count == m) {
			ans++;
		}
	}
	cout << ans << endl;
}