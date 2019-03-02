#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

long long ans1[MAX];
long long ans2[MAX];

int main(int argc, const char *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	long long n, m, aux, aux2, op;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> aux;
		ans2[i] = aux;
		ans1[i] = aux + ans1[i-1];
	}

	sort(ans2+1, ans2+n+1);

	for(int i = 1; i <= n; i++){
		ans2[i] += ans2[i-1];
	}


	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> op >> aux >> aux2;
		if(op == 1)
			cout << ans1[aux2] - ans1[aux-1] << endl;
		else
			cout << ans2[aux2] - ans2[aux-1] << endl;
	}

	return 0;
}