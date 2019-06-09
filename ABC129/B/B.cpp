#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,k,a, b;
	cin >> n;
	vector<int> w(n);
	vector<int> dif(n);
	for (i = 0; i < n; i++) {
		cin >> w[i];
	}

	for (i = 0; i < n; i++) {
		a = 0;
		b = 0;
		for (j = 0; j <= i; j++) {
			a += w[j];
		}
		for (k = j; k < n; k++) {
			b += w[k];
		}
		dif[i] = abs(a - b);
	}
	sort(dif.begin(),dif.end());
	cout << dif[0] << endl;
}