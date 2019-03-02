#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, k, s, ans = 0, aux;
	cin >> n >> k;

	for(int i = 1; i <= n; i++){
		cin >> aux;
		if(i < k && aux > 0) ans++;
		else if(i == k){
			s = aux;
			ans += (aux > 0);
		}
		else if(i > k && aux == s && s > 0) ans++;
	}

	cout << ans << endl;

	return 0;
}