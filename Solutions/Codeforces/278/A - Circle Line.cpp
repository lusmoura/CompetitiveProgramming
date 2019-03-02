#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int vet[MAX];
int ansr, ansl;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, x, y;
	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> vet[i];
	}

	cin >> x >> y;
	if(x > y){
		x = x^y;
		y = x^y;
		x = x^y;
	} 

	for(int i = x; i <= y; i++) {
		ansr += vet[i];
	}
	cout << endl;
	for(int i = y; i != x; i++){
		ansl += vet[i];
		if(i == n) i = 0;
	}

	ansr -= vet[y];

	cout << max(0, min(ansl, ansr)) << endl;

	return 0;
}