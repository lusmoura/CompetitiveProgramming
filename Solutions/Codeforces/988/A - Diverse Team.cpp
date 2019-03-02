#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	int n, k, aux;
	map <int, int> m;
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++){
		cin >> aux;
		m.insert({aux, i});
	}

	if(m.size() < k){
		cout << "NO" << "\n";
		return 0;
	}
	
	cout << "YES" << "\n";

	aux = 1;

	for(map<int,int>::iterator it=m.begin(); it!=m.end(); ++it){
		 if(aux == k+1) break;
		 cout << it->second << " ";
		 aux++;
	}

	return 0;
}