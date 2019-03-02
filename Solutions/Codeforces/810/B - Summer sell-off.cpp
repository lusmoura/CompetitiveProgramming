#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

typedef long long int ll;
ll ans, prod, cli;
vector <ll> vec;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, f;
	cin >> n >> f;

	for(int i = 0; i < n; i++) {
		cin >> prod >> cli;
		ans += min(cli, prod);
		vec.pb(min(2*prod, cli) - min(cli, prod));
	}

	sort(vec.begin(), vec.end(), greater<>());

	for(int i = 0; i < f; i++){
		ans += vec[i];
	}

	cout << ans << endl;

	return 0;
}
