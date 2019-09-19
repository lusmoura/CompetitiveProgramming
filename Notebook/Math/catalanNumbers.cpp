// number of possible binary trees with n keys, numbers of expressions containing n parentheses which are correctly matched...	
// 1/(n+1) * c(2n, n)
#include <bits/stdc++.h>

using namespace std;

long long int binomialCoeff(int n, int k) {
	long long int ans = 1;

	// c(n, k) = c(n, n-k)
	if (k > n-k) k = n-k;

	for (int i = 0; i < k; i++) {
		ans *= (n-i);
		ans /= (i+1);
	}

	return ans;
}

long long int catalan(int n) {
	long long c = binomialCoeff(2*n, n);
	return c/(n+1);
}

int main() {
	int n; cin >> n;
	cout << catalan(n) << '\n';

	return 0;
}