#include <bits/stdc++.h>
#define MAX 1004

using namespace std;

int v[MAX];

long long fastExp(int b, int exp, int mod) {
	long long ans = 1;
	b %= mod;
	
	while(exp > 0) {
		if(exp&1) ans = (ans*b) % mod;
		exp = exp>>1;
		b = (b*b) % mod;
	}

	return ans;
}

int main() {
	int t; cin >> t;

	for(int i = 1; i <= t; i++){
		long long int n, k, mod, sum = 0;
		cin >> n >> k >> mod;

		for(int j = 0; j < n; j++) {
			int v; cin >> v;
			sum = (sum%mod + v) % mod;
		}

		long long ans = fastExp(n, k-1, mod) % mod * sum % mod * k % mod;
		cout << "Case " << i << ": " << ans%mod << '\n';
	}
	return 0;
}