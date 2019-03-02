#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s, t;
	cin >> s >> t;

	if(s.size() != t.size()) {
		cout << "NO" << endl;
		return 0;
	}

	int n = t.size();
	for(int i = 0; i < n; i++) {
		if(s[i] != t[n-i-1]){
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}