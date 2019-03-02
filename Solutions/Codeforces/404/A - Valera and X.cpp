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

	char diagonal, rest, aux;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> aux;

			if(i == 0 && j == 0) diagonal = aux;
			if(i == 0 && j == 1) rest = aux;

			if(diagonal == rest) {
				cout << "NO" << endl;
				return 0;
			}

			if((i == j || i == n-j-1) && aux != diagonal) {
				cout << "NO" << endl;
				return 0;
			} else if (i != j && i != n-j-1 && aux != rest){
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;

	return 0;
}