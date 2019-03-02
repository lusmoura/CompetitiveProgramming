#include<bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	set<int> s;
	int n, a;
	cin >> n;
	while(n--){
		cin >> a;
		if(a)	s.insert(a);
	}

	cout << s.size() << endl;

	return 0;
}