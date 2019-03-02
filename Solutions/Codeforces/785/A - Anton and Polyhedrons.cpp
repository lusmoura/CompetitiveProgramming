#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	int ans = 0;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> s;
		ans += 20 * (s[0] == 'I') + 12 * (s[0] == 'D') + 8 * (s[0] == 'O') + 6 * (s[0] == 'C') + 4 * (s[0] == 'T');
	}

	cout << ans << endl;

	return 0;
}