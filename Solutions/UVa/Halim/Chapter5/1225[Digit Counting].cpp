#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
	int n; cin >> n;
	
	while(n--) {
		int x; cin >> x;
		vector<int> v(11, 0);

		for(int i = 1; i <= x; i++) {
			int j = i;
		
			while(j){
				v[j%10]++;
				j /= 10;
			}
		}

		for(int i = 0; i < 10; i++) cout << v[i] << " \n"[i==9];
	}

	return 0;
}