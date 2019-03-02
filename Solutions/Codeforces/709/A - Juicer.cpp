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
	int n, b, d, ans = 0, waste = 0, aux;

	cin >> n >> b >> d;

	for(int i = 0; i < n; i++){
		cin >> aux;
		if(aux > b) continue;
		waste += aux;
		if(waste > d){
			waste = 0;
			ans++;
		}
	}

	cout << ans << endl;


	return 0;
}