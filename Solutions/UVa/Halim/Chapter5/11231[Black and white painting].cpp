#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, m, c; 

	while(cin >> n >> m >> c, n) {
		n -= 7;
		m -= 7;
		long long total;
		
		if(!c) total = (n*m)/2;
		else total = (n*m + 1)/2;

		cout << total << '\n';
	}

	return 0;
}