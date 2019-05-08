#include <bits/stdc++.h>

using namespace std;

int n;

string solve() {
	
	int ans = 0;
	for(int i = 1; i < n; i++) {
		if(n%i == 0) ans += i;
	}

	if(ans > n) return "ABUNDANT";
	if(ans == n) return "PERFECT";
	return "DEFICIENT";
}

int main() {
		
	cout << "PERFECTION OUTPUT" << "\n";
	while(cin >> n, n) {
		cout << setw(5) << n << "  " <<  solve() << "\n";
	}
	cout << "END OF OUTPUT" << "\n";

	return 0;
}