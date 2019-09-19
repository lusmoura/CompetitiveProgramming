// number of permutations of the numbers 1 to n in which m elements are greater than previous element
// p(n, m) = (n-m) * p(n-1, m-1) + (m+1) * p(n-1, m)
// p(n, 0) = 1
// p(0, m) = p(n, m>n) = 0
#include <bits/stdc++.h>
#define MAX 101
using namespace std;

long long int dp[MAX][MAX];

long long int eulerian(int n, int m) {
	if (m >= n || n <= 0) return 0;
	if (m == 0) return 1;
	if (dp[n][m] != -1) return dp[n][m];

	return dp[n][m] = (n-m) * eulerian(n-1, m-1) + (m+1) * eulerian(n-1, m);
}

int main() {
	int n, m; cin >> n >> m;
	memset(dp, -1, sizeof dp);
	cout << eulerian(n, m) << '\n';
	return 0;
}