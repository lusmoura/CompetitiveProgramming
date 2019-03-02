#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

vector <int> vec;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, aux;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;
		vec.pb(aux);
	}

	sort(vec.begin(), vec.end());

	int i = 0, j = 0;
	int size = vec.size() - 1;

	while(vec[i] == vec[i+1]) i++;
	while(vec[size - j] == vec[size - j - 1]) j++;

	cout << max(0, size - 1 - i - j) << endl;
	return 0;
}