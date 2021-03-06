#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n; cin >> n;

	if(n < 5){
		cout << n*(n-1)/2 << endl;
		return 0;
	}

	ll pow = 1;
	while(pow * 10 <= 2*n)
		pow *= 10;

	
	ll ans = 0;
	for(int i = 1; i*pow <= 2*n; i++){
		ll sum = i * pow - 1;
		ans += min(sum-1, 2*n-sum+1)/2;
	}

	cout << ans << endl;

	return 0;
}