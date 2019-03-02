#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

typedef long long int ll;

ll solve(ll l, ll r){
	if(l > r) return 0;
	ll n = (r-l+1)-(r-l)/2;
	return (l+r)*n/2;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n; cin >> n;
	ll l, r;
	
	while(n--){
		cin >> l >> r;
		cout << solve(l + (l&1), r - (r&1)) - solve(l + !(l&1), r - !(r&1)) << endl;
	}

	return 0;
}