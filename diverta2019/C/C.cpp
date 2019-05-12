#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, i, ab = 0, b = 0,a = 0, btoa = 0;
	string in;
	vector<string> s;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> in;
		s.push_back(in);
		if (*in.begin() == 'B' && (in[in.size() - 1] == 'A')) {
			b++;
			a++;
			btoa++;
		}
		else if (*in.begin() == 'B') {
			b++;
		}
		else if (in[in.size() - 1] == 'A') {
			a++;
		}

		for (int j = 0; j < (int)in.length()-1; j++) {
			if (in.substr(j, 2) == "AB") {
				ab++;
			}
		}
	}

	if (a == btoa && b == btoa) {
		a = max(a-1,0);
	}
	cout << ab + min(a, b) << endl;

	return 0;
}