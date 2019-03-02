#include <bits/stdc++.h>
using namespace std;
#define MAXN 300007

vector<int> e[MAXN];
bool vis[MAXN];
long long n, m, f, root;
bool flag[MAXN];
long long sizet[MAXN];


long long dfs(long long s){
    vis[s] = 1;
    sizet[s] = 1;
    if(s==f) flag[s] = true;
    else flag[s] = false;
    for(unsigned int i = 0; i <e[s].size(); i++){
        long long v = e[s][i];
        if(!vis[v]) {
            sizet[s]+=dfs(v);
            flag[s] |= flag[v];
        }
    }
    return sizet[s];
}


int main(){
    ios::sync_with_stdio(false);
    cin >> n >> f >> root;
    for(int i = 0; i<n-1; i++){
        long long y, x;  cin>>y>>x;   
        e[y].push_back(x);
        e[x].push_back(y);
    }
    
    dfs(root);
    long long fin;
    
    for(unsigned int i = 0; i<e[root].size(); i++){
        long long v = e[root][i];
        if(flag[v]){
            fin = sizet[root] - sizet[v];
            break;
        }
    }
    
    //cout << sizet[root] << endl << sizet[f] << endl << fin << endl;
    cout << (n*(n-1))-(sizet[f]*(fin)) << endl;
    return 0;
}