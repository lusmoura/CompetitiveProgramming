#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 105
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[10];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, top, aux1, aux2;
	cin >> n >> top;

	for(int i = 0; i < n; i++) {
		cin >> aux1 >> aux2;
		if(aux1 == top || aux1 == 7-top || aux2 == top || aux2 == 7-top) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}