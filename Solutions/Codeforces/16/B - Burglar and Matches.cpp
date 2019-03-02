#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;
vector<pair<int, int>> v;

bool comp(int a, int b){return a > b;}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m, r, aux1, aux2, ans = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> aux1 >> aux2;
		v.pb({aux2, aux1});
	}

	sort(v.rbegin(), v.rend());

	for(int i = 0; i < m; i++){
		if(n >= v[i].second){
			ans += v[i].first*v[i].second;
			n -= v[i].second;
		} else{
			ans += v[i].first * n;
			break;
		}
	}



	cout << ans << endl;

	return 0;
}