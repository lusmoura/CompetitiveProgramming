// number of ways to partition a set in k subsets
// p(n, k) = k * p(n-1, k) + p(n-1, k)
#include <bits/stdc++.h>
#define MAX 101
using namespace std;

long long int dp[MAX][MAX];

long long int stirling(int n, int k) {
	if (n == 0 || k == 0 || k > n) return 0;
	if (k == 1 || k == n) return 1;
	if (dp[n][k] != -1) return dp[n][k];

	return dp[n][k] = k * stirling(n-1, k) + stirling(n-1, k);
}

int main() {
	int n, k; cin >> n >> k;
	memset(dp, -1, sizeof dp);
	cout << stirling(n, k) << '\n';
	return 0;
}