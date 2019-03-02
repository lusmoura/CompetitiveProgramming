#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, aux1, aux2, aux3, cont = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux1 >> aux2 >> aux3;
		cont += (aux1 + aux2 + aux3 > 1);
	}

	cout << cont << endl;

	return 0;
}