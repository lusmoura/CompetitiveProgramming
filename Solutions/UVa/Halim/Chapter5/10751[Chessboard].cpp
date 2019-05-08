#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	
	while(n--) {
		int x; cin >> x;
		double ans = 0;
		
		if(x == 1) ans = 0;
		else {
			int s = (x-1)*4;
			int m = x*x - s;

			ans = s + m*sqrt(2);
		}	
		
		cout << fixed << setprecision(3) << ans << '\n';
		if(n) cout << '\n';
	}

	return 0;
}