#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x)  << " is " << (x) << endl

using namespace std;

vector <pair<int, int> > vec;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, v[MAX], aux1, aux2;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> aux1 >> aux2;
		vec.pb({aux1, aux2});
	}

	for(int i = 0; i < m; i++){
		int pos = vec[i].first - 1;
		int amount = vec[i].second;

		if(pos > 0) v[pos - 1] += amount - 1;
		if(pos < n) v[pos + 1] += v[pos] - amount;
		v[pos] = 0;
	}

	for(int i = 0; i < n; i++)
		cout << v[i] << endl;


	return 0;
}