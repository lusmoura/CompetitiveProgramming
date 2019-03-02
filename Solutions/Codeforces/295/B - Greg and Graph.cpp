#include <bits/stdc++.h>

using namespace std;

long long int g[512][512], v[512], use[512], ans[512];

void initi(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			g[i][j] = (1LL << 48); //infinit
		}
	}
}

void input(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> g[i][j];
		}
	}
	for(int i = 0; i < n; i++) cin >> v[i];
	for (int i = 0; i < n; ++i) --v[i]; //só pq é zero based
}

void floyd(int n){
	for(int k = n-1; k > -1; k--){
		use[v[k]] = 1;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				g[i][j] = min(g[i][j], g[i][v[k]] + g[v[k]][j]);
				if(use[i] && use[j]) ans[k] += g[i][j];
			}
		}
	}
}

int main(int argc, char const *argv[]){
	cin.tie(0);
	ios_base:: sync_with_stdio(0);
	int n;

	cin >> n;

	initi(n);
	input(n);
	floyd(n);

	//" \n"[i+1 == n] -> printa espaço entre as respostas e /n no final
	for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i+1 == n];

	return 0;
}