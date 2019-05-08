#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	
	while(cin >> n, n) {
		int l, c;
		int r = sqrt(n);
		int t = n - r*r;
		int s = ceil(sqrt(n));

		if(r*r == n) {
			if(r&1) {
				l = r;
				c = 1;
			} else {
				l = 1;
				c = r;
			}
		} else if(r&1) {
			if(t <= r+1) {
				l = r+1;
				c = t;
			} else {
				l = r+1 - t + s;
				c = r+1;
			}
		} else {
			if(t <= r+1) {
				l = t;
				c = r+1;
			} else {
				l = r+1;
				c = r+1 - t + s;
			}
		}

		cout << c << " " << l << '\n';
	}
	
	// for(int i = 1; i < 1000; i++) cout << i << '\n';

	return 0;
}