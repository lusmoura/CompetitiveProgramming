#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, turn = 1;
	int v[3];
	cin >> n;
	
	while(n--) {
		cin >> v[0] >> v[1] >> v[2];

		sort(v, v+3);

		cout << "Case " << turn++ << ": " << v[1] << endl;
	}

	return 0;
}