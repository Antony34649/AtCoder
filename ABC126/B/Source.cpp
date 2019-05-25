#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int a = stoi(s.substr(0, 2));
	int b = stoi(s.substr(2, 2));

	if (a > 12 || a < 1) {
		if (b < 13 && b > 0) {
			cout << "YYMM" << endl;
		}
		else {
			cout << "NA" << endl;
		}
	}
	else {
		if (b < 13 && b > 0) {
			cout << "AMBIGUOUS" << endl;
		}
		else {
			cout << "MMYY" << endl;
		}
	}

	return 0;
}