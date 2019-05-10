#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;
int factorial(int);
vector<vector<int>> permutation(int,int);

int main() {
	int n, a, b, c, i,input,j,k,ma,mb,mc,s,t,u;
	vector<int> l;
	vector<int> answer;
	vector<int> cpL;

	cin >> n >> a >> b >> c;

	for (i = 0; i < n; i++) {
		cin >> input;
		l.push_back(input);
	}

	for (i = 1; i < n - 2; i++) {
		for (j = 1; j < (n - 1) - i; j++) {
			for (k = 1; k = n - i - j; k++) {

			}
		}
	}
}

int factorial(int m) {
	if (m != 0) {
		return m * factorial(m - 1);
	}
	else {
		return 1;
	}
}

vector<vector<int>> permutation(int n, int r) {
	static vector<vector<int>> p;
	p.resize(factorial(n) / factorial(n-r));


	for (int i = 0; i < p.size(); i++) {
		p[i].resize(r);
		
	}
}