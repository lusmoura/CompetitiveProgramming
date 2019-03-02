#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

typedef long long int ll;

ll v[6], c[6];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, m, ans = 0;
	cin >> n >> m;

	v[0] = n/5;
	c[0] = m/5;
	
	for(int i = 1; i < 5; i++) {
		v[i] = n/5 + (n%5 >= i);
		c[i] = m/5 + (m%5 >= i);
	}

	for(int i = 1; i < 5; i++) {
		ans += v[i] * c[5-i];
	}

	ans += v[0] * c[0];
	
	cout << ans << endl;

	return 0;
}