#include <bits/stdc++.h>

using namespace std;

bool Compare(pair<pair<string,int>,int> front, pair<pair<string,int>, int> back) {
	if (front.first.first == back.first.first) {
		return front.first.second > back.first.second;
	}
	else {
		return front.first.first < back.first.first;
	}
}

int main() {
	int n,i;
	cin >> n;
	vector<pair<pair<string, int>,int>> sp(n);
	for (i = 0; i < n; i++) {
		cin >> sp[i].first.first >> sp[i].first.second;
		sp[i].second = i + 1;
	}
	sort(sp.begin(), sp.end(), Compare);
	for (i = 0; i < n; i++) {
		cout << sp[i].second << endl;
	}
}