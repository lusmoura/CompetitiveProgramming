#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

vector <pair <int, int>> vec;
string ans[3] = {"Carrots", "Kiwis", "Grapes"};

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m, k, t, a, b, l, r;
	cin >> n >> m >> k >> t;

	for(int i = 0; i < k; i++) {
		cin >> a >> b;
		vec.pb({a, b});
	}

	sort(vec.begin(), vec.end());

	for(int i = 0; i < t; i++) {
		cin >> l >> r;
		int mid = lower_bound(vec.begin(), vec.end(), mp(l, r)) - vec.begin();
		if(mid >= 0 && mid < vec.size() && vec[mid] == mp(l, r)) cout << "Waste" << endl;
		else cout << ans[((l-1) * m + r - 1 - mid) % 3] << endl;
	}

	return 0;
}