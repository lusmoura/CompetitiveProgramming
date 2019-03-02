#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int h[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int energy = 0, ans = 0;

	for(int i = 1; i <= n; i++) {
		cin >> h[i];
	}

	for(int k = 0; k < n; k++) {
		energy += (h[k] - h[k+1]);
		if(energy < 0) {
			ans += abs(energy);
			energy = 0;
		} 
	}

	cout << ans << endl;


	return 0;
}