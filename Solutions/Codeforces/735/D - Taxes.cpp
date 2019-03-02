#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;
typedef long long ll;

int isPrime(ll n){
	while(n%2 == 0) n/=2;
	for(int i = 3; i*i <= n; i+=2){
		if(n%i == 0) return 0;
	}

	return 1;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, ans = 0;

	cin >> n;

	if(n % 2 == 0 && n != 2) ans = 2;
	else if(isPrime(n)) ans = 1;
	else if(isPrime(n-2)) ans = 2;
	else ans = 3;

	cout << ans << endl;

	return 0;
}