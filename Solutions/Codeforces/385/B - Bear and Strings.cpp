#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int ct = 0;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		 int dist = (s.substr(i)).find("bear");

		 if(dist != -1)
			 ct += 1 + s.size() - i - dist - 4;
	}

	cout << ct << endl;
	return 0;
}