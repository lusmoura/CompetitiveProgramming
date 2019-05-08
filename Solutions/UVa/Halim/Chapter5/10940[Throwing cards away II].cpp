#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	while(cin >> n, n) {
		int ans = 0;
		if(n == 1) ans = 1;
		else {
			int part = n - pow(2, (int)(log(n)/log(2)));
			if(!part) ans = n;
			else ans = 2*part;
		}
		cout << ans << '\n';
	}

	return 0;
}