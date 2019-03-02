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
	int n, k, ans = 0, aux;
	cin >> n >> k;

	for(int i = 0; i < n; i++){
		cin >> aux;
		if(aux > k) ans++;
		ans++;
	}

	cout << ans << endl;

	return 0;
}