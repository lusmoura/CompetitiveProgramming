#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define se second

using namespace std;

vector <int> vec[3];

int main(int argc, const char *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, aux;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;
		vec[aux-1].pb(i+1);
	}

	int ans = min(min(vec[0].size(), vec[1].size()), vec[2].size());

	cout << ans << endl;
	for(int i = 0; i < ans; i++){
		cout << vec[0][i] << " " << vec[1][i] << " " << vec[2][i] << endl;
	}


	return 0;
}