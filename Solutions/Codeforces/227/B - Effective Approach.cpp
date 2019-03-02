#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int pos[MAX];
long long int ans1, ans2;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int key;
	int n, m;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> key;
		pos[key] = i+1;
	}

	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> key;
		ans1 += pos[key];
		ans2 += n - pos[key] + 1;
	}

	cout << ans1 << " " << ans2 << endl;

	return 0;
}