#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

set <int> s;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, x, aux;
	cin >> n;

	for(int i = 0; i < 2; i++){
		cin >> x;
		for(int i = 0; i < x; i++){
			cin >> aux;
			s.insert(aux);
		}
	}

	if(s.size() == n) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;

	return 0;
}