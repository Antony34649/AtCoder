#include <iostream>

using namespace std;

int main() {
	long long n, m, ans = 0;
	cin >> n;

	for (m = 1; m < n; m++) {
		if (n / m == n % m) {
			ans += m;
		}
	}
	cout << ans << endl;

	return 0;
}