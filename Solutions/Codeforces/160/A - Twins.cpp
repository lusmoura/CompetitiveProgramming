#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

vector <int> v;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, aux, sum = 0, taken = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		v.pb(aux);
		sum += aux;
	}

	sort(v.begin(), v.end());

	aux = 0;
	int size = v.size() - 1;
	while(taken <= sum){
		sum -= v[size - aux];
		taken += v[size - aux];
		aux++;
	}

	cout << aux << endl;

	return 0;
}