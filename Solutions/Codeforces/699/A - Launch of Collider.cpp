#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 200005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[MAX];
int ans = INF;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	string s;
	cin >> s;

	for(int i = 0; i < n; i++) 
		cin >> v[i];

	for(int i = 0; i < n-1; i++) {
		if(s[i] == 'R' && s[i+1] == 'L') {
			ans = min(ans, v[i+1] - v[i]);
		}
	}

	if (ans == INF) cout << -1 << endl;
	else cout << ans/2 << endl;

	return 0;
}