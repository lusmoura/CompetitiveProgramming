#include <bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int size, num, friendl;
	int n; cin >> n;
	
	for(int i = 0; i < n; i++) {
		int ans = 0;
		int m; cin >> m;

		for(int j = 0; j < m; j++) {
			 cin >> size >> num >> friendl;
			 ans += size * friendl;
		}
		
		cout << ans << endl;
	}

	return 0;
}