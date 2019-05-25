#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n, k, i;
	long double ans = 0;
	cin >> n >> k;

	for (i = 1; i <= n; i++) {
		if (i < k) {
			ans += (1/(long double)n) * pow((long double)0.5,ceil(log2((long double)k / i)));
		}
		else {
			ans += 1 / (long double)n;
		}
	}

	cout << setprecision(12) << ans << endl;

}