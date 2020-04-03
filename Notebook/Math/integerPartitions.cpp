// set of positive numbers which add up to n
// f(n, k) = f(n-k, k) + f(n, k-1)
#include <bits/stdc++.h>
#define MAX 101
using namespace std;

long long int dp[MAX][MAX];

long long int integerPart(int n, int k) {
	if (k == 0 || n < 0) return 0;
	if (n == 0) return 1;
	if (dp[n][k] != -1) return dp[n][k];

	return dp[n][k] = integerPart(n-k, k) + integerPart(n, k-1);
}

int main() {
	int n; cin >> n;
	memset(dp, -1, sizeof dp);
	cout << integerPart(n, n) << '\n';
	return 0;
}