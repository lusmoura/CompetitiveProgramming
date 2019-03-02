#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 10005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, r;
	cin >> n >> r;

	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int last = -1;
	int ans = 0;
	int pos;
	while(last < n-1) {
		pos = -1;
		
		for(int i = n-1; i > max(-1, last-r+1); i--){
			if(v[i] && i - r <= last) {
				pos = i;
				break;
			}
		}

		if(pos == -1) return cout << -1 << endl, 0;

		last = pos + r - 1;
		ans++;
	}

	cout << ans << endl;

	return 0;
}