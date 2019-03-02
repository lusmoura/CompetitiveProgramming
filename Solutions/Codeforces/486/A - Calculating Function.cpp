#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

typedef long long int ll;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n;
	cin >> n;

	ll ans = (n+1)/2;

	if(n%2) cout << -ans << endl;
	else cout << ans << endl;

	return 0;
}