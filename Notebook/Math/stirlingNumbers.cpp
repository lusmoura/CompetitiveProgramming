// number of permutations on n elements with k cycles
// p(n, k) = p(n-1, k-1) + (n-1) * p(n-1, k)
#include <bits/stdc++.h>
#define MAX 101
using namespace std;

long long int dp[MAX][MAX];

long long combination(int n, int k) {
	if (k > n) return -1;
	if (n == k || k == 0) return 1;

	return combination(n-1, k-1) + combination(n-1, k);
}

long long int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n-1);	
}

long long int stirling(int n, int k) {
	if (n == 0 || k == 0 || k > n) return 0;
	if (k == n) return 1;
	if (k == 1) return factorial(n - 1);
	if (n - k == 1) return combination(n, 2);
	if (dp[n][k] != -1) return dp[n][k];

	return dp[n][k] = stirling(n-1, k-1) + (n-1) * stirling(n-1, k);
}

int main() {
	int n, k; cin >> n >> k;
	memset(dp, -1, sizeof dp);
	cout << stirling(n, k) << '\n';
	return 0;
}