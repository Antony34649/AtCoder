#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, i, j;
	vector<int> x;

	cin >> n;

	for (i = 0; i < n-1; i++) {
		for (j = 0; j < 3; j++) {
			int input;
			cin >> input;
			x.push_back(input);
		}
	}

	for (i = 0; i < (n - 1) * 3; i++) {
		cout << x[i] << endl;
	}
}