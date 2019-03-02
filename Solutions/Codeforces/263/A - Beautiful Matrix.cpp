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

	int aux, ans;

	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			cin >> aux;
			if(aux) ans = abs(3-i) + abs(3-j);
		}
	}

	cout << ans << endl;

	return 0;
}