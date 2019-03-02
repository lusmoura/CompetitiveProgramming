#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[2];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s, t, aux;

	int n;

	cin >> n;

	cin >> s;
	v[0]++;

	for(int i = 1; i < n; i++) {
		cin >> aux;
		if(aux != s) {
			t = aux;
			v[1]++;
		} else {
			v[0]++;
		}
	}

	if(v[0] > v[1]) cout << s << endl;
	else cout << t << endl;

	return 0;
}