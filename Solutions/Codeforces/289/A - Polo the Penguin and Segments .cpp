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

	int n, k, value = 0, aux1, aux2;
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		cin >> aux1 >> aux2;
		value += (aux2 - aux1 + 1);
	}

	if(value % k == 0) cout << 0 << endl;
	else cout << (k - (value % k)) % k << endl;

	return 0;
}