#include <bits/stdc++.h>

using namespace std;

vector<vector<long long>> bc;
int n;

void binominal_coefficient() {
	for (int i = 0; i <= n; i++) bc[i][0] = bc[i][i] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			bc[i][j] = bc[i-1][j-1] + bc[i-1][j];
		}
	}
}

int main() {
	cin >> n;

	bc.resize(n+1, vector<long long>(n+1, 0));
	binominal_coefficient();
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << bc[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}