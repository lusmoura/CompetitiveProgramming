#include <bits/stdc++.h>
#define MAX 100006
using namespace std;

int main() {
	long long n, times;
	cin >> times;
	
	for(int i = 1; i <= times; i++){
		cin >> n;
		double ans = n * (n-1) * 0.5 / 2;

		if(((n-2) % 4) == 0 || ((n-2) % 4) == 1)
			cout << fixed << setprecision(0) << "Case " << i << ": " << ans*2 << "/2";
		else
			cout << fixed << setprecision(0) << "Case " << i << ": " << ans;
		cout << '\n';
	}

	return 0;
}