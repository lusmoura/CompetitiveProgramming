#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, aux;
	cin >> n;

	int j = n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		v[aux] = 1;
		while(j >= 0 && v[j]){
			cout << j << " ";
			j--;
		}
		cout << endl;
	}

	return 0;
}