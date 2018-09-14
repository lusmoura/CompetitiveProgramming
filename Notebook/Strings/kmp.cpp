/*KMP
	phi function = greater proper prefiz that is also proper suffix
	kmp = searches for a pattern p in a string s
	O(N)
*/

#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005

using namespace std;

string s, p;
int phi[MAX];

void report(int id){
	cout << "Found on: " << id << endl;
}

//calculates phi function
void pre(){
	p += '#';
	phi[1] = 0;
	
	int x = 0;

	for(int i = 2; i <= s.size(); i++){
		while(x > 0 && s[i-1] != s[x]) 
			x = phi[x];

		if(s[i-1] == s[i]) x++;
		
		phi[i] = x;
	}
}

int kmp(){
	pre();

	int x = 0;
	int ocur = 0;
	for(int i = 0; i < p.size(); i++){
		while(x > 0 && p[i] != s[x]) 
			x = phi[x];
		
		if(p[i] == s[x]) x++;

		if(x == s.size()-1) {
			ocur++;
			report(i-x+1);
		}
	}
	return ocur;
}
int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}