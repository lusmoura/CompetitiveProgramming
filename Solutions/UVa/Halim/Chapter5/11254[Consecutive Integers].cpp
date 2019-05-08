#include <bits/stdc++.h>

using namespace std;

const int MAX = 50004;

int main() {

	int n;
	
	while(cin >> n, n != -1) {
		int l = -1;
		int r = -1;
		
		for(int i = sqrt(2*n); i >= 1; i--) {
			int a = (2*n - i*i + i)/ (2*i);
			
			if(2*a*i + i*i - i == 2*n) {
				l = a;
				r = i;
				break;
			}

		}

		cout << n << " = " << l << " + ... + " << l+r-1 << '\n';
	}

	return 0;
}