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

	long long int n, k, ans = 0;
	cin >> n >> k;


	if(k > (n+1)/2){
		ans = (k - (n+1)/2) * 2;
	} else {
		ans = 1 + (k-1) * 2;
	}
	cout << ans << endl;

	return 0;
}