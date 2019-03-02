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
	int ans = 0;
	string s;
	cin >> s;

	ans += min(abs(s[0] - 'a'), 26 - abs(s[0] - 'a'));
	for(int i = 1; i < s.size(); i++){
		ans += min(abs(s[i] - s[i-1]), 26 - abs(s[i] - s[i-1]));
	}

	cout << ans << endl;

	return 0;
}