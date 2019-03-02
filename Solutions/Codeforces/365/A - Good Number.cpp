#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int v[10];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	bool can = true;
	string s;
	int n, k, ans = 0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++) {
		can = true;
		memset(v, 0, sizeof(v));
		cin >> s;
		
		for(int j = 0; j < s.size(); j++) {
			v[s[j] - '0'] = 1;
		}

		for(int j = 0; j <= k; j++) {
			if(!v[j]) can = false;
		}

		if(can) ans++;
	}

	cout << ans << endl;

	return 0;
}