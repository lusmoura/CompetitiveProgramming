#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int n, v[2];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	string s;
	cin >> n >> s;

	for(int i = 0; i < n; i++){
		v[s[i] - '0']++;
	}

	cout << abs(v[0] - v[1]) << endl;

	return 0;
}