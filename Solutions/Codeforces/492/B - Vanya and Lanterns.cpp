#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1000000009
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

typedef long long int ll;

vector <ll> v;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, l, aux;
	cin >> n >> l;

	for(int i = 0; i < n; i++) {
		cin >> aux;
		v.pb(aux);
	}

	sort(v.begin(), v.end());

	double ans = v[0];
	for(int i = 0; i < n-1; i++) {
		ans = max(ans, (double)(v[i+1] - v[i])/2);
	}

	ans = max(ans, (double)l-v[n-1]);

	cout << setprecision(9) << fixed;
	cout << ans << endl;
	return 0;
}