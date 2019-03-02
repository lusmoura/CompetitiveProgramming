#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int vet[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	for (int i = 0; i <= 2*n; ++i){
		cin >> vet[i];
	}

	for(int i = 0; i <=2*n; i++){
		if(i%2 && k && (vet[i] > vet[i+1] + 1) && (vet[i] > vet[i-1] + 1)){
			vet[i]--;
			k--;
		}
	}

	for(int i = 0; i <=2*n; i++){
		cout << vet[i] << " ";
	}

	cout << endl;

	return 0;
}