#include<bits/stdc++.h>

#define MAX 100005
using namespace std;

vector<int> edge[35];
int cnt[MAX], last[MAX];
int nodes;
int n;
string s;

void add(int at, const string &s, int i){
	cnt[at]++;
	
	if(i == s.size()){
		last[at]++;
		return;
	}

	int e = s[i] - 'a';
	if(!edge[at][e]) 
		edge[at][e] = nodes++;

	cout << "here" << endl;
	add(edge[at][e], s, i+1);
}

void find(int at, int k){
	for(char c = 'a'; c <= 'z'; c++){
		int e = c - 'a';
		if(cnt[edge[at][e]] <= k){
			s += c;
			find(edge[at][e], k);
			s.pop_back();
		}
		else{
			k -= cnt[edge[at][e]];
		}
		k -= last[at];
		if(k <= 0) cout << s << endl;
	}
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	s = "oi";
	add(0, s, 0);
	find(0, 0);

	return 0;
}