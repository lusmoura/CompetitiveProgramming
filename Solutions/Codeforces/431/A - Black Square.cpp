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
	int val[4], ans = 0;
	string s;

	for(int i = 0; i < 4; i++){
		cin >> val[i];
	}

	cin >> s;

	for(int i = 0; i < s.size(); i++){
		ans += val[s[i] - '1']; 
	}

	cout << ans << endl;
	return 0;
}