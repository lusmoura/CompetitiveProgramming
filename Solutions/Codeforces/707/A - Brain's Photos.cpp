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

	int n, m;
	char aux;
	cin >> n >> m;

	for(int i = 0; i < n*m; i++){
		cin >> aux;
		if(aux == 'C' || aux == 'M' || aux == 'Y'){
			cout << "#Color" << endl;
			return 0;
		}
	}

	cout << "#Black&White" << endl;

	return 0;
}