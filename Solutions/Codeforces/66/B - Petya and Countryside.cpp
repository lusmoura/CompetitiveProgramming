#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1003
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

using namespace std;

int n, ans;
int l[MAX], r[MAX];
int vet[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> vet[i];
	}

	l[0] = 1;
	for(int i = 0; i < n-1; i++){
		if(vet[i] <= vet[i+1]){
			l[i+1] += l[i] + 1;
		} 
		else{
			l[i+1] = 1;
		}
	}

	r[n-1] = 1;
	for(int i = n-1; i > 0; i--){
		if(vet[i] <= vet[i-1]){
			r[i-1] += r[i] + 1;
		} 
		else{
			r[i-1] = 1;
		}
	}

	for(int i = 0; i < n; i++){
		ans =  max(ans, l[i]+r[i]);
	}

	cout << ans-1 << endl;

	return 0;
}