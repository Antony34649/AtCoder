#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n = 0;

	cin >> s;

	for (int i = 0; i < s.size();) {
		if (s.substr(i, 2) == "01" || s.substr(i, 2) == "10") {
			n += 2;
			s.erase(i, 2);
			if (i != 0) i--;
		}
		else {
			i++;
		}
	}
	cout << n << endl;

	return 0;
}