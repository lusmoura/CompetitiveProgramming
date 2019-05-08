#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t = 0;
	
	while(cin >> n) {
		// if(t) cout << '\n',	t = 1;
		
		double diagonal = ceil((sqrt(1+8*n) -1)/2);
		int l = diagonal - 1;
		int c = n - (l+1) * l/2;

		if(l&1) {
			l = l + 2 - c;
			cout << "TERM " << n << " IS " << c << "/" << l << '\n';
		} else {
			l = l + 2 - c;
			cout << "TERM " << n << " IS " << l << "/" << c << '\n';
		}

	}

	return 0;
}