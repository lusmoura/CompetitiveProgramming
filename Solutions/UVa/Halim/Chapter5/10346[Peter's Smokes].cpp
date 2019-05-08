#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;

	while(cin >> n >> k) {
		int ans = n+(n-1)/(k-1);
		cout << ans << endl;
	}

	return 0;
}