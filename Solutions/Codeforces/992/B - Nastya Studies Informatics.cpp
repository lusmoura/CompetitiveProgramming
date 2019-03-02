#include <bits/stdc++.h>

#define DEBUG 0
#define MAX 100005

typedef long long int ll;

using namespace std;

int gcd(int c, int d){
	if(c == 0) return d;
	return gcd(d%c, c);
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll l, r, x, y;
	cin >> l >> r >> x >> y;
	ll ans = 0;
	ll cd = y/x;

	if(y % x == 0){
		for(int c = 1; c*c <= cd; c++){
			if(cd % c == 0){
				int d = cd/c;
				if(__gcd(c,d) == 1 && l <= c*x && l <= d*x && r >= d*x && r >= c*x) 
					ans += 1 + (c != d);
			}
		}
	} 

	cout << ans << endl;

	return 0;
}