#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 155005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int sum[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, k, val = INF, ans = 0;
	cin >> n >> k;

	for(int i = 1; i <= n; i++){
		cin >> sum[i];
		sum[i] += sum[i-1];
	}

	for(int i = k; i <= n; i++){
		if(val > sum[i] - sum[i-k]){
			val = sum[i] - sum[i-k];
			ans = i-k+1;
		}
	}

	cout << ans << endl;

	return 0;
}