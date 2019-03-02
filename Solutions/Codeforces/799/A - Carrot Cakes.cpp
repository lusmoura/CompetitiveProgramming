#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, t, k, d;
	cin >> n >> t >> k >> d;

	int oneOven = t * ((n+k-1) / k);
	int twoOvens = INF;

	for (int i = 0; i <= n; i++){
        twoOvens = min(twoOvens, max(d + (i+k-1)/k * t, (n-i+k-1)/k * t));
	}

	if (twoOvens < oneOven) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}