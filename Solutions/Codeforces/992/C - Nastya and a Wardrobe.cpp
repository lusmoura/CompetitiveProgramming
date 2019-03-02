//E(k+1) = 2E(k)/2 + (2E(k) - 1)/2
#include <bits/stdc++.h>

typedef long long int ll;
const ll mod = 1000000007;

using namespace std;

ll multi(ll a, ll b){
	return ((a % mod) * (b % mod)) % mod;
}

ll fastExp(ll n, ll e){
	ll res = 1;
	while(e > 0){
		if(e & 1)
			res = multi(res, n);

		n = multi(n, n);
		e = e >> 1;
	}
	return res;
}

int main(int argc, const char *argv[]){
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, k;
	cin >> n >> k;

	if(!n){
		cout << 0 << endl;
		return 0;
	}

	ll doisak = fastExp(2, k) % mod;
	ll doisakmaisum = fastExp(2, k+1) % mod;

	ll ans = (multi(doisakmaisum, n) - doisak + 1);
	ans = (ans % mod + mod) % mod;

	cout << ans << endl;
	return 0;
}