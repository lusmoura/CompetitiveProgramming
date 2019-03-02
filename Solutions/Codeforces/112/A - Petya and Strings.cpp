#include <bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s, t;
	int ans = 0;	

	cin >> s >> t;
	for(int i = 0; i < s.size(); i++){
		if(tolower(s[i]) > tolower(t[i])) {
			ans = 1;
			break;
		}
		else if(tolower(s[i]) < tolower(t[i])) {
			ans = -1;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}