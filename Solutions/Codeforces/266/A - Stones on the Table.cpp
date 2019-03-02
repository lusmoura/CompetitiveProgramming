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
	int n, ans = 0;
	cin >> n;
	string s;
	cin >> s;
	
	if(n == 1) {
		cout << "0" << endl;
		return 0;
	}

	for(int i = 0, j = 1; j < n; i++, j++){
		if(s[i] == s[j]) ans++;
	}

	cout << ans << endl;

	return 0;
}