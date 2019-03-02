#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1000006
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

typedef long long ll;

using namespace std;

int n, m, k, x, y;
int holes[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> m >> k;

	for(int i = 0; i < m; i++){
		cin >> x;
		holes[x] = 1;
	}

	int cur = 1;

	for(int i = 0; i < k; i++){
		cin >> x >> y;
		
		if(holes[cur] == 1) break;
		
		if(x == cur) cur = y;
		else if (y == cur) cur = x;

	}

	cout << cur << endl;

	return 0;
}