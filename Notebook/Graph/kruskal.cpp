/*Kruskal
	Finds MST using DST
	O(E * log(E))	
*/

#include<bits/stdc++.h>

#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

typedef struct _edg{
	int x, y, w;
} edg;

int p[MAX];
int rank[MAX];
int size, m, n;
edg edges[MAX];
edg mst[MAX];

bool comp(edg a, edg b){ return a.w < b.w; }

int find(int x){
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

void join(int a, int b){
    a = find(a);
    b = find(b);
    
    if(rank[a] < rank[b]) 
    	p[a] = b;
    else if(rank[b] < rank[a]) 
    	p[b] = a;
    else{
        p[a] = b;
        rank[b]++;
    }
}

int kruskal(){
	int ans = 0;
	
	sort(edges+1, edges+m+1, comp);

	for(int i = 1; i <= m; i++){
		if(find(edges[i].x) != find(edges[i].y)){
			join(edges[i].x, edges[i].y);
			mst[++size] = edges[i];
			ans += edges[i].w;
		}
	}
	return ans;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}