#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int n, v[3], ans[3];
int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> v[j];
			ans[j] += v[j];
		}
	}

	for(int i = 0; i < 3; i++){
		if(ans[i]){
			cout << "NO" << endl;
			return 0;
		}
	}


	cout << "YES" << endl;

	return 0;
}