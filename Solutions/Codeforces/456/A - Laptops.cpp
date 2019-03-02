#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

vector <pair <int, int>> vec;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, aux1, aux2;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> aux1 >> aux2;
		vec.pb({aux1, aux2});
	}

	sort(vec.begin(), vec.end());

	for(int i = 0; i < n-1; i++) {
		if(vec[i].second > vec[i+1].second) {
			cout << "Happy Alex" << endl;
			return 0;
		}
	}

	cout << "Poor Alex" << endl;
	return 0;
}