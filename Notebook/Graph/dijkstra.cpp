#include <bits/stdc++.h>

using namespace std;
#define inf 0x3f3f3f3f
typedef pair<int, int> pii;

int n, m, s, x, y, p; //n = vertices, m = edges, s = target, p = weight
int dist[100005], processed[100005];
vector <pii> edges[100005];
priority_queue <pii, vector<pii>, greater<pii>>pq;

void Dijkstra(int s){
	for(int i = 1; i <= n; i++) dist[i] = inf;
	
	dist[s] = 0;
	pq.push({dist[s], s});
	
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		
		if(processed[u]) continue;
		processed[u] = 1;
		
		for(auto a : edges[u]){
			int v = a.first;
			int w = a.second;
			if(dist[v] > dist[u] + w){
				dist[v] = dist[u] + w;
				pq.push({dist[v], v});
			}
		}
	}
}	


int main(int argc, char const *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> n >> m >> s;
	memset(processed, 0, sizeof(processed));
	for(int i = 1; i <=m; i++){
        cin >> x >> y >> p;
        edges[x].push_back({y, p});
        edges[y]. push_back({x, p});
    }

    Dijkstra(s);

    for(int i = 1; i <= n; i++){
        if(dist[i] == inf) dist[i] = -1;
        cout << dist[i] << "\n";
    }

	return 0;
}