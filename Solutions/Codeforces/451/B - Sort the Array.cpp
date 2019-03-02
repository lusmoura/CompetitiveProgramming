#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

vector<pair<int, int>> v;
int vet[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int n, aux, start = -1, fin = -1;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> aux;
		v.pb({aux, i});
		vet[i] = aux;
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		if(v[i].second != i) {
			start = i;
			break;
		}
	}

	for(int i = n-1; i >= 0; i--){
		if(v[i].second != i) {
			fin = i + 1;
			break;
		}
	}

	if(start == -1 || fin == -1) {
		cout << "yes" << endl;
		cout << "1 1" << endl;
		return 0;
	}


	reverse(vet+start, vet+fin);

	for(int i = 0; i < n-1; i++){
		if(vet[i+1] < vet[i]){
			cout << "no" << endl;
			return 0;
		}
	}

	cout << "yes" << endl;
	cout << start+1 << " " << fin << endl;

	return 0;
}