#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	long long int l, r; cin >> l >> r;
	if(r - l < 2) cout << "-1" << endl;
	else if(r - l == 2 && (l & 1)) cout << "-1" << endl;
	else cout << l + (l%2) << " " << l + 1 + (l%2) << " " << l + 2 + (l%2) << endl;

	return 0;
}