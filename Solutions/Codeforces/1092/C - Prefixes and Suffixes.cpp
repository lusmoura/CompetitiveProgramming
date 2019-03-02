#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int n;
int ans[MAX];
string s, t, v[MAX];

bool isPref(string test, string st) {
	return (test == st.substr(0, test.size()));
}

bool isSuf(string test, string st) {
	return ((test == st.substr(st.size() - test.size())));
}

bool test(string st) {
	map <string, int> pre;
	map <string, int> suf;

	for(int i = 0; i < 2*n-2; i ++) {
		if(isPref(v[i], st) && !pre[v[i]]){
			ans[i] = 1;
			pre[v[i]] = 1;
		} else if(isSuf(v[i], st) && !suf[v[i]]) {
			ans[i] = 0;
			suf[v[i]] = 1;
		} else return false;
	}

	for(int i = 0; i < 2*n - 2; i++) {
		if(ans[i]) cout << "P";
		else cout << "S";
	}
	cout << endl;
	return true;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	bool first = true;
	cin >> n;

	for(int i = 0; i < 2*n-2; i++) {
		cin >> v[i];
		if(v[i].size() == n-1 && first) {
			s = v[i];
			first = false;
		}
		else if(v[i].size() == n-1) t = v[i];
	}

	s = t[0] + s;
	t = s[1] + t;

	if(test(s));
	else test(t);

	return 0;
}