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

	int hh, mm, h, d, c, n;
	double ans = 0;
	cin >> hh >> mm;
	cin >> h >> d >> c >> n;

	int amount = ceil(h/(double)n);
	ans = amount * c;

	int disc = (hh >= 20) ? 0 : (20 - hh) * 60 - mm;
	h += d * disc;
	amount = ceil(h/(double)n);

	ans = min(ans, 0.8*c*amount);

	cout << setprecision(4) << fixed;
	cout << ans << endl;

	return 0;
}