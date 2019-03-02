#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int val[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, a, ans;

	cin >> n >> a;

	for(int i = 1; i <= n; i++){
		cin >> val[i];
	}

	ans = val[a];
	
	int i = 2;
	int r = a+1, l = a-1;
	while(r <= n || l > 0){
		
		if(l < 1) l = 0;
		
		if(val[r] && val[l]){
			ans += 2;
		}

		else if(val[r] ^ val[l]){
			if(r > n || l == 0)
				ans++;
		}
		r = a + i;
		l = a - i;
		i++;
	}
	
	cout << ans << endl;

	return 0;
}