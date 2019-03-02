#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]){
	
	cin.tie(0);
 	ios_base::sync_with_stdio(0);
	
	int turn = 1;
 	string s;

 	while(cin >> s && s != "*") {
 		if(s == "Hajj") cout << "Case " << turn << ": Hajj-e-Akbar" << endl;
 		else cout << "Case " << turn << ": Hajj-e-Asghar" << endl;
 		turn++;
 	}

	return 0;
}