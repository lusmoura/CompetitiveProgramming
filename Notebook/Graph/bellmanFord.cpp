/* Bellman Ford 
	 O(V * E)
*/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 0x3f3f3f3f
#define MAX 301

typedef long long ll;
typedef pair<int, int> ii;

int dist[MAX];
vector <ii> edges[MAX];
int n;

bool bellmanFord(int s) {
	memset (dist, INF, sizeof(dist));
	dist[s] = 0;
	bool found = false;

	for(int i = 1; i <= n; i++){
		for(int u = 1; u <= n; u++){
			for(int j = 0; j < edges[u].size(); j++){
				int v = edges[u][j].first;
				int w = edges[u][j].second;

				if (dist[v] > dist[u] + w){
					dist[v] = dist[u] + w;
					found = !found;
					break;
				}
			}
		}
	}

	return found;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}