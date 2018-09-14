/*Grundy Number*/

#include <bits/stdc++.h>

using namespace std;

int g[MAX];

void grundy(){
	g[1] = 0;
	for (int i = 2; i <= 50; i++) {
		set <int> neighboors;
		//pilha de tamanho i
		// tamanho j eh i-j
		for (int j = 1; j < i; j++) {
			int k = i - j;
			neighboors.insert(g[j] ^ g[k]);
		}

		for (int x = 0; ; x++) {
			if (!neighboors.count(x)) {
				g[i] = x;
				break;
			}
		}
	}
}

int main (void){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}