#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 105
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;
int n, home[MAX], guest[MAX], aux1, aux2;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux1 >> aux2;
		home[aux1]++;
		guest[aux2]++;
	}

	aux1 = 0;
	for(int i = 0; i < MAX; i++){
		aux1 += home[i] * guest[i];
	}

	cout << aux1 << endl;

	return 0;
}