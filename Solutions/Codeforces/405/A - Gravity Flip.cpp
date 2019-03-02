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
	int aux, n;
	vector<int> v;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		v.pb(aux);
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << "\n";

	return 0;
}