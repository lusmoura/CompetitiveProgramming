#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, x, y;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		if(x>y) cout << '>' << endl;
		else if(x<y) cout << '<' << endl;
		else cout << '=' << endl;
	}

	return 0;
}