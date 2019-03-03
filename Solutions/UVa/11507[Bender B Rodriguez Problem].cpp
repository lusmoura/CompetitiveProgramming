#include <bits/stdc++.h>

using namespace std;

map <string, map <string, string>> state;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	state["+x"]["+y"] = "+y";
    state["+x"]["-y"] = "-y";
    state["+x"]["+z"] = "+z";
    state["+x"]["-z"] = "-z";
    
    state["-x"]["+y"] = "-y";
    state["-x"]["-y"] = "+y";
    state["-x"]["+z"] = "-z";
    state["-x"]["-z"] = "+z";
    
    state["+y"]["+y"] = "-x";
    state["+y"]["-y"] = "+x";
    state["+y"]["+z"] = "+y";
    state["+y"]["-z"] = "+y";
    
    state["-y"]["+y"] = "+x";
    state["-y"]["-y"] = "-x";
    state["-y"]["+z"] = "-y";
    state["-y"]["-z"] = "-y";
    
    state["+z"]["+y"] = "+z";
    state["+z"]["-y"] = "+z";
    state["+z"]["+z"] = "-x";
    state["+z"]["-z"] = "+x";
    
    state["-z"]["+y"] = "-z";
    state["-z"]["-y"] = "-z";
    state["-z"]["+z"] = "+x";
    state["-z"]["-z"] = "-x";
 
	int n;
	string to;

	while(cin >> n, n) {
		string from = "+x";
		while(--n) {
			// cout << from << " ";
			cin >> to;
			if(to != "No") from = state[from][to];
		}
		cout << from << endl;
	}

	return 0;
}