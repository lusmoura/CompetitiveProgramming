#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	int x;
	
	for(int i = 1; i <= t; i++) {
		int n; cin >> n;
		int ans = -1;
		
		for(int i = 0; i < n; i++) {
			cin >> x;
			ans = max(ans, x);
		}

		cout << "Case " << i << ": " << ans << endl;
	}

	return 0;
}