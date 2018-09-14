/*Floyd Warshall
	O(N³)
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 301
#define INF 0x3f3f3f3f

int edges[MAX][MAX];
int n;

void floyd_warshall(){
	for (int k = 1; k <= n; k++){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				edges[i][j] = min(edges[i][j], edges[i][k] + edges[k][j]);
			}
		}
	}
}

int main(){
	int aux1, aux2, w;
	cin >> n;
	
	memset(edges, INF, sizeof(edges));

	for(int i = 0; i < n; i++){
		cin >> aux1 >> aux2 >> w;
		edges[aux1][aux2] = w;
	}
}