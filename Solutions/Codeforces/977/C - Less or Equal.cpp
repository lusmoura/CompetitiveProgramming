#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1000005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int n, k, ans = 0, v[MAX];
int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	sort(v, v + n);

	if(k > n || (n > 1 && v[k] == v[k-1])) ans = -1;
	else if(n == k) ans = v[k-1];
	else ans = v[k] - 1;

	if(!ans || ans > 1e9) ans = - 1;

	cout << ans << endl;

	return 0;
} 