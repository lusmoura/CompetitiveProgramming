#include <bits/stdc++.h>

using namespace std;


int solve(int i, int n) {

	for(int j = 0; j < i; j++) {
		if(n%i != 1) return 0;
		n -= 1 + ((n-1) / i);
	}

	if(n%i != 0) return 0;
	return i;
}

int main() {
	int n;
	while(cin >> n, n > -1) {
		int ans = 0;
		
		for(int i = ceil(sqrt(n)); i > 1; i--) {
			ans = solve(i, n);
			if(ans) break;
		}

		cout << n << " coconuts, ";
		if(!ans) cout << "no solution\n";
		else cout << ans << " people and 1 monkey\n";
	}

	return 0;
}