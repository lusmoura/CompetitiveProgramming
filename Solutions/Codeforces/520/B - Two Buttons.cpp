#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int n, m, ans;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> m >> n;
	
	while(n != m){
		if(n < m || n%2)
			n++;
		else
			n /= 2;
		ans++;
	}
	cout << ans << endl;

	return 0;
}