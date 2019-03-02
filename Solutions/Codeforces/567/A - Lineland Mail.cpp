#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

typedef long long int ll;

ll v[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, minDist, maxDist;
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	for(int i = 0; i < n; i++){
		if(i == 0) { 
			minDist = abs(v[1] - v[0]);
			maxDist = abs(v[n-1] - v[0]);
		} else if(i == n-1) {
			minDist = abs(v[n-1] - v[n-2]);
			maxDist = abs(v[n-1] - v[0]);
		} else {
			minDist = min(abs(v[i] - v[i-1]), abs(v[i+1] - v[i]));
			maxDist = max(abs(v[i] - v[0]), abs(v[n-1] - v[i]));
		}
		cout << minDist << " " << maxDist << endl;
	}

	return 0;
}