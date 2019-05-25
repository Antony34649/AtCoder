#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main() {
	int n, m, i, j, x = 0;
	long long ans=0;
	cin >> n >> m;
	vector<int> a(n), b(m) , c(m);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < m; i++) {
		cin >> b[i] >> c[i];
	}

	sort(a.begin(), a.end());
	for (i = 1; i < m; i++) {
		for (j = 0; j < m - i; j++) {
			if (c[j] > c[j + 1]) {
				int tmp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = tmp;
				
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}

	for (j = m - 1; j >= 0; j--) {
		for (i = n - 1; i >= 0;i--) {
			if (a[i] < c[j]) {
				x = i+1;
				break;
			}
			else {
				ans += a[i];
			}
		}
		
		if (b[j] <= x) {
			ans += c[j] * x;
			cout << ans << endl;
			return 0;
		}
		else {
			ans += c[j] * b[j];
		}

		i = x-2-b[j];
	}
}